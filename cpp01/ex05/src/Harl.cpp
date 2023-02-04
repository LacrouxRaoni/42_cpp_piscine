/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:01:38 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 11:01:39 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[DEBUG]\n - I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]\n - I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]\n - I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]\n - This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::message(void)
{
	std::cout << "[MESSAGE]\n - Invalid option" << std::endl;
}

int Harl::levelToIndex(std::string level)
{
	int i;

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	i = 0;
	while(i != 4 && level.compare(levels[i]) != 0){
		i++;
	}
	return i;
}


void Harl::complain( std::string level )
{
	void (Harl::*function[5])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::message};
	switch (levelToIndex(level)){
		case 0:
			(this->*function[0])();
			break ;
		case 1:
			(this->*function[1])();
			break ;
		case 2:
			(this->*function[2])();
			break ;
		case 3:
			(this->*function[3])();
			break ;
		default:
			(this->*function[4])();
			break ;
	}
}