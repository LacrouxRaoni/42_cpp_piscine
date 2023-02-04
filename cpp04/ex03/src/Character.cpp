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
		delete slot[i];
	}
	for (int i = 0; i < 50; i++){
		delete droppedMateria[i];
	}
}

Character::Character(const Character& character)
{
	*this = character;
}

Character& Character::operator=(Character const& character)
{
	if (this != &character)
	{
		this->name = character.getName();
		for (int i = 0; i < 4; i++){
			this->slot[i] = NULL;
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
		if (slot[i] == NULL){
			slot[i] = m;	
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	for (int i = 0; i < 50; i++){
		if (droppedMateria[i] == NULL)
		{
			droppedMateria[i] = this->slot[idx];
			break ;
		}
	}
	this->slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	this->slot[idx]->use(target);
}