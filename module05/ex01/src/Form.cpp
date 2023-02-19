#include "Form.hpp"

Form::Form() : name("Default"), signedForm(false), gradeToExec(1), gradeToSign(1)
{
}

Form::Form(std::string name, int gradeToExec, int gradeToSign) : name(name), signedForm(false), gradeToExec(gradeToExec), gradeToSign(gradeToSign)
{
	if (this->gradeToExec < 1 || this->gradeToSign < 1)
		throw GradeTooHighException();
	if (this->gradeToExec > 150 || this->gradeToSign > 150)
		throw GradeTooLowException();
}

Form::~Form(){
}

Form::Form(const Form& form) : name(form.getName()), signedForm(form.getSignedForm()), gradeToExec(form.getGradeToExec()), gradeToSign(form.getGradeToSign())
{
	*this = form;
}

Form& Form::operator=(const Form& form)
{
	if (this != &form)
	{
		this->signedForm = form.signedForm;
	}
	return *this;
}

const std::string& Form::getName() const
{
	return this->name;
}

bool Form::getSignedForm() const
{
	return this->signedForm;
}

int Form::getGradeToExec() const
{
	return this->gradeToExec;
}

int Form::getGradeToSign() const
{
	return this->gradeToSign;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	this->signedForm = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream &lhs, const Form &rhs){
	lhs << "Form name: " << rhs.getName() << " Grade to exec: " << rhs.getGradeToExec() << " Grade to Sign" << rhs.getGradeToSign();
	return lhs;
}
