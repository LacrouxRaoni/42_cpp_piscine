#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal standard constructor called" << std::endl;
	this->type = "Default wrong type";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal param constructor called" << std::endl;
	this->type = type;
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
		this->type = wrongAnimal.type;
	}
	return *this;
}

const std::string& WrongAnimal::getType() const
{
	std::cout << "WrongAnimal getter called" << std::endl;
	return this->type;
}

void WrongAnimal::makesound() const
{
	std::cout << "WrongAnimal sound" << std::endl; 
}