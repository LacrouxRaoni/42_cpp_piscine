#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& robotomyRequestForm) : AForm(robotomyRequestForm.getName(), robotomyRequestForm.getGradeToSign(), robotomyRequestForm.getGradeToExec())
{
	*this = robotomyRequestForm;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& robotomyRequestForm)
{
	if (this != &robotomyRequestForm)
	{
		this->setSignedForm(robotomyRequestForm.getSignedForm());
		this->target = robotomyRequestForm.getTarget();
	}
	return *this;
}

std::string RobotomyRequestForm::getTarget()
{
	return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	AForm::execute(executor);

	srand(0);
	std::cout << "drilling noises" << std::endl;
	if (rand() % 2)
		std::cout << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << target << " robotomy failed.." << std::endl;

}