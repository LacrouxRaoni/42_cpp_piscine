#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::~Cure(){

}

Cure::Cure(const Cure& cure) : AMateria()
{
	*this = cure;
}

Cure& Cure::operator=(Cure const& cure)
{
	if (this != &cure)
	{
		this->type = cure.getType();
	}
	return *this;
}

AMateria* Cure::clone() const
{
	AMateria* cure = new Cure();
	return cure;
}

void Cure::use(ICharacter& target)
{
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}