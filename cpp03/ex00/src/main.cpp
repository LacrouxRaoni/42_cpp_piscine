/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:00:31 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/26 18:57:58 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

static void logChar(ClapTrap &clapTrap)
{
	std::cout << "\n===Character Status===" << std::endl;
	std::cout << "Name: " << clapTrap.getName() << std::endl;
	std::cout << "Energy Points: " << clapTrap.getEnergyPoint() << std::endl;
	std::cout << "Hit Points: " << clapTrap.getHitPoint() << std::endl;
	std::cout << std::endl;
}

int main(void){
	ClapTrap clapTrap("type CL4P-TP");

	logChar(clapTrap);

	clapTrap.attack("Marvin");
	clapTrap.takeDamage(9);
  	clapTrap.beRepaired(5);

	logChar(clapTrap);

	ClapTrap *clone = new ClapTrap(clapTrap);
	clone->takeDamage(6);
	clone->beRepaired(5);
	logChar(*(clone));
	delete clone;
}