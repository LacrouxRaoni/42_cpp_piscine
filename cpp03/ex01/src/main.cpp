/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:00:53 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/26 18:39:41 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

static void logChar(ScavTrap &scavTrap)
{
	std::cout << "\n===Character Status===" << std::endl;
	std::cout << "Name: " << scavTrap.getName() << std::endl;
	std::cout << "Energy: " << scavTrap.getEnergyPoint() << std::endl;
	std::cout << "Hit Point: " << scavTrap.getHitPoint() << std::endl;
	std::cout << "Attack Damage: " << scavTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;
}

int main(void){
	ScavTrap scavTrap("SC4V-TP");
	logChar(scavTrap);

	while (scavTrap.getEnergyPoint() > 1)
		scavTrap.attack("CL4P-TP");
	scavTrap.takeDamage(19);
	scavTrap.beRepaired(5);
	scavTrap.guardGate();
	scavTrap.attack("CL4P-TP");


	logChar(scavTrap);
}