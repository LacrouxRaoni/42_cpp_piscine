#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Cat standard constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat& cat) : AAnimal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = cat;
}

Cat::~Cat(){
	std::cout << "Cat destructor constructor called" << std::endl;
	delete brain;
}

Cat& Cat::operator=(Cat const& cat)
{
	std::cout << "Cat operator constructor called" << std::endl;
	if (this != &cat)
	{
		this->type = cat.getType();
		this->brain = cat.brain;
	}
	return *this;
}

void Cat::makeSound() {
	std::cout << this->type << ": meaaaaowww" << std::endl;
}

Brain& Cat::getBrain() const{
	return *this->brain;
}