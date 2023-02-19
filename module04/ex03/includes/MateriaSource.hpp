#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materiaSlot[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& materiaSource);
		~MateriaSource();
		MateriaSource& operator=(MateriaSource const& materiaSource);
		void learnMateria(AMateria* materiaSource);
		AMateria* createMateria(std::string const& type);
};

#endif