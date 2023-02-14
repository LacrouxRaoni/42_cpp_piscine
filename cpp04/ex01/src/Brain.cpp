#include "Brain.hpp"

	Brain::Brain(){
		std::cout << "Brain standard constructor called" << std::endl;
		for (int i = 0; i < 100; i++){
			this->ideas[i] = "";
		}
	}

	Brain::Brain(const Brain& brain)
	{
		std::cout << "Brain copy constructor called" << std::endl;	
		*this = brain;
	}

	Brain::~Brain(){
		std::cout << "Brain destructor constructor called" << std::endl;
	}

	Brain& Brain::operator=(Brain const& brain)
	{
		std::cout << "Brain operator constructor called" << std::endl;

		for (int i = 0; i < 100; i++)
			this->ideas[i] = brain.ideas[i];
		return *this;
	}

	std::string Brain::getIdeas(int i){
		return this->ideas[i];
	}