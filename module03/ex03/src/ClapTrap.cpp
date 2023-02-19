/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:00:28 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/26 15:32:20 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap standard constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap param constructor called" << std::endl;
	this->name = name;
	hitPoint = 10;
	energyPoint = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap& clapTrap)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = clapTrap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap& clapTrap)
{
	std::cout << "ClapTrap assigment operator called" << std::endl;
	if (this != &clapTrap)
	{
		this->name = clapTrap.getName();
		this->hitPoint = clapTrap.getHitPoint();
		this->energyPoint = clapTrap.getEnergyPoint();
		this->attackDamage = clapTrap.getAttackDamage();
	}
	return *this;
}

std::string ClapTrap::getName()
{
	return this->name;
}

unsigned int ClapTrap::getHitPoint()
{
	return this->hitPoint;
}

unsigned int ClapTrap::getEnergyPoint()
{
	return this->energyPoint;
}

unsigned int ClapTrap::getAttackDamage()
{
	return this->attackDamage;	
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoint > 0 && this->hitPoint > 0)
	{
		std::cout << "ClapTrap " << this->getName();
		std::cout << " attacks " << target;
		std::cout << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->energyPoint -= 1;
	} else {
		std::cout << "ClapTrap " << this->getName() << " can't attack energy is 0" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{	
	if (this->energyPoint > 0 && this->hitPoint > 0) 
	{
		std::cout << "ClapTrap " << this->getName() << " has taken " << amount << " of damage" << std::endl;
		this->hitPoint -= amount;
	} else {
		std::cout << "ClapTrap " << this->getName() << " hit point is 0" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint > 0 && this->hitPoint > 0) 
	{
		std::cout << "ClapTrap " << this->getName() << " was repaired by " << amount << " points" << std::endl;
		this->hitPoint += amount;
		this->energyPoint -= 1;
	} else {
		std::cout << "ClapTrap " << this->getName() << " can't repair. Energy point is 0" << std::endl;
	}
}
