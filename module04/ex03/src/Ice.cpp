#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::~Ice(){

}

Ice::Ice(const Ice& ice) : AMateria()
{
	*this = ice;
}

Ice& Ice::operator=(Ice const& ice)
{
	if (this != &ice)
	{
		this->type = ice.getType();
	}
	return *this;
}

AMateria* Ice::clone() const{
	return (new Ice());
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}