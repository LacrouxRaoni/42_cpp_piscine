#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap standard constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap()
{
	std::cout << "FragTrap param constructor called" << std::endl;
	this->name = name;
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(FragTrap& fragTrap) : ClapTrap()
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = fragTrap;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& fragTrap)
{
	std::cout << "FragTrap assigment operator called" << std::endl;
	if (this != &fragTrap)
	{
		this->name = fragTrap.getName();
		this->hitPoint = fragTrap.getHitPoint();
		this->energyPoint = fragTrap.getEnergyPoint();
		this->attackDamage = fragTrap.getAttackDamage();
	}
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "positive high fives!!!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->energyPoint > 0)
	{
		std::cout << "FragTrap " << this->getName();
		std::cout << " attacks " << target;
		std::cout << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->energyPoint -= 1;
	} else {
		std::cout << "FragTrap " << this->getName() << " energy is 0" << std::endl;
	}
}