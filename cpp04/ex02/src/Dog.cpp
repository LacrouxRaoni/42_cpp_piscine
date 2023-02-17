#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "Dog standard constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog& dog) : AAnimal(dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*dog.brain);
	*this = dog;
}

Dog::~Dog(){
	std::cout << "Dog destructor constructor called" << std::endl;
	delete this->brain;
}

Dog& Dog::operator=(Dog const& dog)
{
	std::cout << "Dog operator constructor called" << std::endl;
	if (this != &dog)
	{
		if (this->brain != NULL)
			delete this->brain;
		this->brain = new Brain(*dog.brain);
		this->type = dog.getType();
	}
	return *this;
}

void Dog::makeSound()  {
	std::cout << this->type << ": au, au, au" << std::endl;
}

Brain& Dog::getBrain() const
{
	return *this->brain;	
}
