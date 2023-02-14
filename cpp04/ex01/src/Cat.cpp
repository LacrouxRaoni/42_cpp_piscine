#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat standard constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat& cat) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*cat.brain);
	*this = cat;
}

Cat::~Cat(){
	std::cout << "Cat destructor constructor called" << std::endl;
	delete this->brain;
}

Cat& Cat::operator=(Cat const& cat)
{
	std::cout << "Cat operator constructor called" << std::endl;
	if (this != &cat)
	{
		this->type = cat.getType();
		this->brain = new Brain(*cat.brain);
	}
	return *this;
}

void Cat::makeSound() const{
	std::cout << this->getType() << ": meaaaaowww" << std::endl;
}

Brain& Cat::getBrain() const{
	return *this->brain;
}