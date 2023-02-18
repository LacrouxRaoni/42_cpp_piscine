#include "AForm.hpp"

AForm::AForm() : name("Default"), signedForm(false), gradeToExec(1), gradeToSign(1)
{
}

AForm::AForm(std::string name, int gradeToExec, int gradeToSign) : name(name), signedForm(false), gradeToExec(gradeToExec), gradeToSign(gradeToSign)
{
	if (gradeToExec < 1 || gradeToSign < 1)
		throw GradeTooHighException();
	if (gradeToExec > 150 || gradeToSign > 150)
		throw GradeTooLowException();
}

AForm::~AForm(){
}

AForm::AForm(const AForm& form) : name(form.getName()), signedForm(form.getSignedForm()), gradeToExec(form.getGradeToExec()), gradeToSign(form.getGradeToSign())
{
	*this = form;
}

AForm& AForm::operator=(const AForm& form)
{
	if (this != &form)
	{
		this->signedForm = form.getSignedForm();
	}
	return *this;
}

const std::string& AForm::getName() const
{
	return this->name;
}

bool AForm::getSignedForm() const
{
	return this->signedForm;
}

int AForm::getGradeToExec() const
{
	return this->gradeToExec;
}

int AForm::getGradeToSign() const
{
	return this->gradeToSign;
}

void AForm::setSignedForm(bool signedForm)
{
	this->signedForm = signedForm;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	if (this->getSignedForm() == true)
		throw FormSignedException();
	this->signedForm = true;
}

void AForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > this->getGradeToExec())
	{
		throw GradeTooLowException();
	}
	if (this->getSignedForm() == false)
	{
		throw FormNotSignedException();
	}
}

std::ostream& operator<<(std::ostream &rhs, const AForm &lhs){
	rhs << lhs;
	return rhs;
}