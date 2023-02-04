#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++){
		this->materiaSlot[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource){
	*this = materiaSource;
	for (int i = 0; i < 4; i++){
		this->materiaSlot[i] = NULL;
	}
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++){
		delete this->materiaSlot[i];
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource const& materiaSource)
{
	if (this != &materiaSource)
	{
		*this = materiaSource;
		for (int i = 0; i < 4; i++){
			this->materiaSlot[i] = NULL;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materiaSource)
{
	for (int i = 0; i < 4; i++){
		if (this->materiaSlot[i] == NULL){
			this->materiaSlot[i] = materiaSource;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++){
		if (this->materiaSlot[i]->getType() == type){
			return this->materiaSlot[i]->clone();
		}
	}
	return (0);
}
