#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(1){
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade)
{
	if (grade < 1){
		throw GradeTooHighException();
	}
	if (grade > 150){
		throw GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : name(bureaucrat.name)
{
	*this = bureaucrat;
}


Bureaucrat::~Bureaucrat()
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	if (this != &bureaucrat)
	{
		this->grade = bureaucrat.grade;
	}
	return *this;
}

const std::string Bureaucrat::getName() const{
	return this->name;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

void Bureaucrat::incrementBureaucratGrade()
{
	if (getGrade() == 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementBureaucratGrade()
{
	if (getGrade() == 150)
		throw GradeTooLowException();
	grade++;
}

std::ostream& operator<<(std::ostream& rhs, const Bureaucrat &lhs){
	rhs << lhs.getName() << ", bureaucrat grade " << lhs.getGrade();
	return rhs;
}
