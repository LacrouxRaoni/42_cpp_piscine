/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookService.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:59:21 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 10:59:22 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookService.hpp"

PhoneBookService::PhoneBookService(){
};

PhoneBookService::~PhoneBookService(){
};

void PhoneBookService::searchOption(){

	PhoneBookEntity contacts;
	int index;

	std::cout << "\nSEARCH OPTION\n" <<std::endl;
	contacts.printList();
	std::cout << "\nChoose contact by index: ";
	std::cin >> index;
	std::cin.ignore(1, '\n');
	if (index < 1 || index > 8)
		std::cout << "\nInvalid Index\n" << std::endl;
	else
		contacts.printContactData(index);
}