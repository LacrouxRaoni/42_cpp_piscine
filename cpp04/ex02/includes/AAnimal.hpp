#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal& animal);
		virtual ~AAnimal();
		AAnimal& operator=(AAnimal const& animal);
		const std::string& getType() const;
		virtual void makeSound() = 0;
};

#endif