#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool signedForm;
		const int gradeToExec;
		const int gradeToSign;
	public:
		AForm();
		AForm(const std::string name, int gradeToExec, int gradeToSign);
		virtual ~AForm();
		AForm(const AForm& form);
		AForm& operator=(const AForm& form);
		const std::string& getName() const;
		bool getSignedForm() const;
		void setSignedForm(bool signedForm);
		int getGradeToExec() const;
		int getGradeToSign() const;
		void beSigned(const Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const& executor) const;
		
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

		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class FormSignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class OpenFileException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream &rhs, const AForm& lhs);

#endif