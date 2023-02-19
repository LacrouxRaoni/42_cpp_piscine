#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++){
		slot[i] = NULL;
	}
	for (int i = 0; i < 50; i++){
		droppedMateria[i] = NULL;
	}
}

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++){
		slot[i] = NULL;
	}
	for (int i = 0; i < 50; i++){
		droppedMateria[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++){
		if (this->slot[i] != NULL)
			delete this->slot[i];
	}
	for (int i = 0; i < 50; i++){
		delete droppedMateria[i];
	}
}

Character::Character(const Character& character)
{
	for (int i = 0 ; i < 4; i++)
		this->slot[i] = NULL;
	*this = character;
}

Character& Character::operator=(Character const& character)
{
	if (this != &character)
	{
		this->name = character.getName();
		for (int i = 0; i < 4; i++){
			if (this->slot[i] != NULL){
				delete this->slot[i];
				this->slot[i] = NULL;
			}
			if (character.slot[i] != NULL)
				this->slot[i] = character.slot[i]->clone();
		}
		for (int i = 0; i < 50; i++){
			this->droppedMateria[i] = NULL;
		}	
	}
	return *this;
}

std::string const& Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++){
		if (this->slot[i] == NULL){
			this->slot[i] = m;	
			return ;
		}
	}
	for (int i = 0; i < 50; i++){
		if (droppedMateria[i] == NULL)
		{
			droppedMateria[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4){
		for (int i = 0; i < 50; i++){
			if (this->droppedMateria[i] == NULL)
			{
				this->droppedMateria[i] = this->slot[idx];
				this->slot[idx] = NULL;
				break ;
			}
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (this->slot[idx] != NULL)
		this->slot[idx]->use(target);
}