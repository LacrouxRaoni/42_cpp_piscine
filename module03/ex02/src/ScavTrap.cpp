/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:01:22 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/26 14:01:24 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap standard constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	std::cout << "ScavTrap param constructor called" << std::endl;
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;	
}

ScavTrap::ScavTrap(ScavTrap& scavTrap) : ClapTrap()
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = scavTrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& scavTrap)
{
	std::cout << "ScavTrap assigment operator called" << std::endl;
	if (this != &scavTrap)
	{
		this->name = scavTrap.getName();
		this->hitPoint = scavTrap.getHitPoint();
		this->energyPoint = scavTrap.getEnergyPoint();
		this->attackDamage = scavTrap.getAttackDamage();
	}
	return *this;

}

void ScavTrap::guardGate()
{
	std:: cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energyPoint > 0)
	{
		std::cout << "ScavTrap " << this->getName();
		std::cout << " attacks " << target;
		std::cout << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->energyPoint -= 1;
	} else {
		std::cout << "ScavTrap " << this->getName() << " energy is 0" << std::endl;
	}
}