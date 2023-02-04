#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& wrongAnimal);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(WrongAnimal const& wrongAnimal);
		void wrongAnimalSound() const;
};

#endif