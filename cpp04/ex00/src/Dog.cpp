#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog standard constructor called" << std::endl;
}

Dog::Dog(const Dog& dog) : Animal(dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
}

Dog::~Dog(){
	std::cout << "Dog destructor constructor called" << std::endl;
}

Dog& Dog::operator=(Dog const& dog)
{
	std::cout << "Dog operator constructor called" << std::endl;
	if (this != &dog)
	{
		this->type = dog.type;
	}
	return *this;
}

void Dog::makeSound() const{
	std::cout << this->getType() << ": au, au, au" << std::endl;
}