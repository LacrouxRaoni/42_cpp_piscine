#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal standard constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal)
{
	std::cout << "WrongAnimal param constructor called" << std::endl;
	*this = wrongAnimal;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;	
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& wrongAnimal)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	if (this != &wrongAnimal)
	{
		*this = wrongAnimal;
	}
	return *this;
}

void WrongAnimal::wrongAnimalSound() const
{
	std::cout << "COWABUNGA" << std::endl; 
}