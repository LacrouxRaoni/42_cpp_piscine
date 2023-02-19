#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential form", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("presidential form", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& presidentialPardonForm) : AForm(presidentialPardonForm.getName(), presidentialPardonForm.getGradeToSign(), presidentialPardonForm.getGradeToExec())
{
	*this = presidentialPardonForm;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& presidentialPardonForm)
{
	if (this != &presidentialPardonForm)
	{
		this->setSignedForm(presidentialPardonForm.getSignedForm());
		this->target = presidentialPardonForm.getTarget();
	}
	return *this;
}

std::string PresidentialPardonForm::getTarget()
{
	return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	AForm::execute(executor);
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}