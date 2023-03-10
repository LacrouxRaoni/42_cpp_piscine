#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
	    std::string const name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat& bureaucrat);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat& bureaucrat);
		const std::string getName() const;
		int getGrade() const;

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
	
	void incrementBureaucratGrade();
	void decrementBureaucratGrade();
	void signForm(AForm &form);
	void executeForm(AForm const& form);
};

std::ostream& operator<<(std::ostream& rhs, const Bureaucrat &lhs);

#endif