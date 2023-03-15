<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:01:20 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 11:01:21 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Error.hpp"
=======
#include "Error.hpp"


void errorPrinter(int errorCode)
{

	switch (errorCode)
	{
		case -1:
			std::cout << "Error code " << errorCode << ": Invalid arguments" << std::endl;
			break ;
		case -2:
			std::cout << "Error code " << errorCode << ": System can't open the file" << std::endl;
			break ;
		case -3:
			std::cout << "Error code " << errorCode << ": File is empty" << std::endl;
			break ;
		case -4:
			std::cout << "Error code " << errorCode << ": Empty String" << std::endl;
			break ;
	default:
		break;
	}
}