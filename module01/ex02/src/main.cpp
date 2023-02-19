/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:00:38 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 11:00:39 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "memory address: " << &str << std::endl;
	std::cout << "memory address: " << &stringPTR << std::endl;
	std::cout << "memory address: " << &stringREF << std::endl;

	std::cout << "string value: " << str << std::endl;
	std::cout << "string value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "string value pointed by stringREF: " << stringREF << std::endl;


}