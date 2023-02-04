#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog standard constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog& dog) : Animal(dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = dog;
}

Dog::~Dog(){
	std::cout << "Dog destructor constructor called" << std::endl;
	delete brain;
}

Dog& Dog::operator=(Dog const& dog)
{
	std::cout << "Dog operator constructor called" << std::endl;
	if (this != &dog)
	{
		this->brain = dog.brain;
		this->type = dog.type;
	}
	return *this;
}

void Dog::makeSound() const{
	std::cout << this->type << ": au, au, au" << std::endl;
}

Brain* Dog::getBrain(){
	return this->brain;	
}