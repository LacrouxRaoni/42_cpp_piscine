#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const Dog& dog);
		~Dog();
		Dog& operator=(Dog const& dog);
		void makeSound();
		Brain* getBrain();
};

#endif