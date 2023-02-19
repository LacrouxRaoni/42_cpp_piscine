#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const& type);
		virtual ~AMateria();
		AMateria(const AMateria& materia);
		AMateria& operator=(AMateria const& materia);
		std::string const& getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
std::ostream& operator<<(std::ostream &lhs, AMateria& rhs);

#endif