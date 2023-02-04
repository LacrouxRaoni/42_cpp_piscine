/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:57:47 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 10:57:49 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie(){
	std::cout << "Zombie is dead...again" << std::endl;
}

std::string Zombie::getName(){
	return _name;
}

void Zombie::insertName(std::string name){
	_name = name;
}

void Zombie::announce(void){
	std::cout << this->_name << ": is alive..." << std::endl;
}

