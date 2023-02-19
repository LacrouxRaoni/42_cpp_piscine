#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++){
		this->materiaSlot[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource){
	for (int i = 0; i < 4; i++){
		this->materiaSlot[i] = NULL;
	}
	*this = materiaSource;
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
		for (int i = 0; i < 4; i++){
			if (this->materiaSlot[i] != NULL)
			{
				delete this->materiaSlot[i];
				this->materiaSlot[i] = NULL;
			}
			if (materiaSource.materiaSlot[i] != NULL){
				this->materiaSlot[i] = materiaSource.materiaSlot[i]->clone();
				std::cout << this->materiaSlot[i]->getType() << std::endl;
			}
		}

	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materiaSource)
{
	for (int i = 0; i < 4; i++){
		if (this->materiaSlot[i] == NULL){
			this->materiaSlot[i] = materiaSource;
			return ;
		}
	}
	delete materiaSource;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++){
		if (this->materiaSlot[i] != NULL && this->materiaSlot[i]->getType() == type){
			return this->materiaSlot[i]->clone();
		}
	}
	return (0);
}
