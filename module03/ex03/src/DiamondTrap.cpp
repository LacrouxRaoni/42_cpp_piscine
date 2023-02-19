#include "DiamondTrap.hpp"

	DiamondTrap::DiamondTrap(){
		std::cout << "DiamontTrapp constructor called" << std::endl;
	}

	DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
	{
		std::cout << "DiamontTrapp param constructor called" << std::endl;
		this->name = name;
		hitPoint = FragTrap::hitPoint;
		energyPoint = ScavTrap::energyPoint;
		attackDamage = FragTrap::attackDamage;
	}

	DiamondTrap::DiamondTrap(DiamondTrap& diamondTrap) : ClapTrap(diamondTrap), ScavTrap(diamondTrap), FragTrap(diamondTrap)
	{
		std::cout << "DiamondTrap copy constructor called" << std::endl;
		*this = diamondTrap;
	}

	DiamondTrap::~DiamondTrap()
	{
		std::cout << "DiamondTrap destructor called" << std::endl;
	}

	DiamondTrap& DiamondTrap::operator=(DiamondTrap& diamondTrap)
	{
		std::cout << "DiamondTrap assigment operator called" << std::endl;
		if (this != &diamondTrap)
		{
			name = ClapTrap::name;
			hitPoint = FragTrap::hitPoint;
			energyPoint = ScavTrap::energyPoint;
			attackDamage = FragTrap::attackDamage;
		}
		return *this;
	}

	std::string DiamondTrap::getName()
	{
		return name;	
	}

	void DiamondTrap::attack(const std::string& target)
	{
		ScavTrap::attack(target);
	}

	void DiamondTrap::whoAmI()
	{
		std::cout << "DiamondTrap name is " << name << std::endl;
		std::cout << "ClapTrap name is " << ClapTrap::getName() << std::endl;
	}
