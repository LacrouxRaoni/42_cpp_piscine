/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:00:47 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 11:00:48 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private: 
		std::string name;
		Weapon 		*weapon;
	public:
		HumanB();
		HumanB(std:: string name);
		~HumanB();
		void setWeapon(Weapon &weapon);
		void attack();
};
#endif