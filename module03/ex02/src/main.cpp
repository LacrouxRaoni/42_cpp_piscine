/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:01:19 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/26 14:50:10 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

static void logChar(FragTrap &fragTrap)
{
	std::cout << "\n===Character Status===" << std::endl;
	std::cout << "Name: " << fragTrap.getName() << std::endl;
	std::cout << "Energy: " << fragTrap.getEnergyPoint() << std::endl;
	std::cout << "Hit Point: " << fragTrap.getHitPoint() << std::endl;
	std::cout << "Attack Damage: " << fragTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;
}

int main(void){
	FragTrap fragTrap("robot");
	logChar(fragTrap);
	while (fragTrap.getEnergyPoint() > 1)
		fragTrap.attack("CL4P-TP");
	fragTrap.takeDamage(99);
	fragTrap.beRepaired(5);
	fragTrap.highFivesGuys();
	fragTrap.beRepaired(5);
	logChar(fragTrap);
}