/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:01:04 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 11:01:05 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
}

Weapon::Weapon(std::string type) {
	_type  = type;
}

Weapon::~Weapon(){
}

const std::string Weapon::getType() const{
	return _type;
}

void Weapon::setType(std::string type){
	this->_type = type;
}