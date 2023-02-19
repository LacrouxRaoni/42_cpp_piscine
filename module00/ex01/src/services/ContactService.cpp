/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactService.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:59:18 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 10:59:19 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactService.hpp"

bool ContactService::checkIfIsBlank(std::string fName,
					   std::string lName,
					   std::string nickName,
					   std::string phoneNumber,
					   std::string darkestSecret)
{
	if(fName.empty()){
		std::cout << "\nFist Name can't be blank\n" << std::endl;
		return false;
	} else if (lName.empty()) {
		std::cout << "\nLast Name can't be blank\n" << std::endl;
		return false;
	} else if (nickName.empty()) {
		std::cout << "\nNickname can't be blank\n" << std::endl;
		return false;
	} else if (phoneNumber.empty()) {
		std::cout << "\nPhone Number can't be blank\n" << std::endl;
		return false;
	} else if (darkestSecret.empty()) {
		std::cout << "\nDarkest secret can't be blank\n" << std::endl;
		return false;
	}
	return true;
}

bool ContactService::checkIfIsAlphaNum(std::string word)
{
	size_t i;
	for (i = 0; i < word.length(); i++) 
	{
		if (isascii(word.at(i)) == 0) {
			std::cout << "\nInvalid Args.\n" << std::endl;
			return false;
		}
	}
	return true;
}

bool ContactService::validPhoneNumber(std::string phoneNumber)
{
	if (phoneNumber.size() > 20) {
		std::cout << "\nPhone number can't have more than 20 characters\n" << std::endl;
	} else {
		size_t i;
		for (i = 0; i < phoneNumber.length(); i++) {
			if (isdigit(phoneNumber.at(i)) == 0) {
				std::cout << "\nPhone number must have numbers only.\n" << std::endl;
				return false;
			}
		}
	}
	return true;
}

bool ContactService::validation(std::string fName,
					   std::string lName,
					   std::string nickName,
					   std::string phoneNumber,
					   std::string darkestSecret)
{
	if (!checkIfIsBlank(fName, lName, nickName, phoneNumber, darkestSecret))
		return false;
	if (!checkIfIsAlphaNum(fName) || !checkIfIsAlphaNum(lName) || !checkIfIsAlphaNum(nickName) || !checkIfIsAlphaNum(darkestSecret))
		return false ;
	if (!validPhoneNumber(phoneNumber))
		return false;
	return true;	
}

void ContactService::addContact()
{
	PhoneBookEntity phone;
	std::string fName;
	std::string lName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "\nADD OPTION\n" << std::endl;
	std::cout << "Fist Name: ";
	std::getline(std::cin, fName);
	std::cout << "Last Name: ";
	std::getline(std::cin, lName);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickName);
	std::cout << "Phone Number (numbers only): ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkestSecret);

	if (!validation(fName, lName, nickName, phoneNumber, darkestSecret))
		return ;
	ContactEntity contact(fName, lName, nickName, phoneNumber, darkestSecret);
	phone.saveContact(contact);
	
}