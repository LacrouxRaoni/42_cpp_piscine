#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Animal standard constructor called" << std::endl;
	this->type = "Default type";
}

AAnimal::AAnimal(std::string type)
{
	std::cout << "Animal param constructor called" << std::endl;
	this->type = type;
}

AAnimal::AAnimal(const AAnimal& animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

AAnimal::~AAnimal(){
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const& animal)
{
	std::cout << "Animal operator constructor called" << std::endl;
	if (this != &animal)
	{
		this->type = animal.type;
	}
	return *this;
}

const std::string& AAnimal::getType() const
{
	std::cout << "Animal getter called" << std::endl;
	return this->type;
}

