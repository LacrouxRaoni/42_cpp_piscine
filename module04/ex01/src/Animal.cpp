#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal standard constructor called" << std::endl;
	this->type = "Default type";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal param constructor called" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(Animal const& animal)
{
	std::cout << "Animal operator constructor called" << std::endl;
	if (this != &animal)
	{
		this->type = animal.type;
	}
	return *this;
}

const std::string& Animal::getType() const
{
	std::cout << "Animal getter called" << std::endl;
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::ostream& operator<<(std::ostream &output, Animal& animal)
{
	output << animal.getType();
	return output;
}