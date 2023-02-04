#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat standard constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongCat) : WrongAnimal()
{
	std::cout << "WrongCat param constructor called" << std::endl;
	*this = wrongCat;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;	
}

WrongCat& WrongCat::operator=(WrongCat const& wrongCat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	if (this != &wrongCat)
	{
		*this = wrongCat;
	}
	return *this;
}

