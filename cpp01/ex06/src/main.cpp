/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:01:57 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 11:01:58 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]){
	Harl harl;

	switch (argc)
	{
		case 2:
			harl.complain(argv[1]);
			break;
		default:
			harl.complain("invalid");
			break;
	}
}
