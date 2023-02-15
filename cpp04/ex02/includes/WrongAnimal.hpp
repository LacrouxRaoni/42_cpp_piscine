#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& wrongAnimal);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(WrongAnimal const& wrongAnimal);
		const std::string& getType() const;
		void makesound() const;
};

#endif