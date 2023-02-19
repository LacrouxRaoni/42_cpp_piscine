#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat standard constructor called" << std::endl;
}

Cat::Cat(const Cat& cat) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat(){
	std::cout << "Cat destructor constructor called" << std::endl;
}

Cat& Cat::operator=(Cat const& cat)
{
	std::cout << "Cat operator constructor called" << std::endl;
	if (this != &cat)
	{
		this->type = cat.getType();
	}
	return *this;
}

void Cat::makeSound() const{
	std::cout << this->getType() << ": meaaaaowww" << std::endl;
}