/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:58:49 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 10:58:50 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void printUpperCase(const char *str)
{
	while (*str){
		std::cout << (char)toupper(*(str++));
	}
}

int main(int argc, char const *argv[])
{
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		while (*(++argv)){
			printUpperCase(*argv);
		}
		std::cout << std::endl;
	}
}
