/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookEntity.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:59:14 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 10:59:16 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookEntity.hpp"

int PhoneBookEntity::index = 0;

ContactEntity PhoneBookEntity::phonebook[8];

PhoneBookEntity::PhoneBookEntity()
{
}

PhoneBookEntity::~PhoneBookEntity()
{
}


void  PhoneBookEntity::saveContact(ContactEntity contact)
{
	if (index > 7)
		index = 0;
	phonebook[index] = contact;
	index++;
	std::cout << "\nContact saved with success\n" << std::endl;
}

std::string PhoneBookEntity::columnCustomize(std::string word)
{
	int size;
	std::string line;

	if (word.length() >= 10){
		line.append(word, 0, 9);
		line.append(".");
	} else {
		size = 10 - word.length();
		for (int i = 0; i < size; i++){
			line.append(" ");
		}
		line.append(word);
	}
	return line;
}

void PhoneBookEntity::printData(ContactEntity contact, int i)
{
	std::cout << "         " << (i + 1) << "|";
	std::cout << columnCustomize(contact.getFirstName()) << "|";
	std::cout << columnCustomize(contact.getLastName()) << "|";
	std::cout << columnCustomize(contact.getNickname()) << "|" << std::endl;

}

void PhoneBookEntity::printList(void)
{
	int i;

	i = 0;
	std::cout << "     Index|" << " Fist Name|" << " Last Name|" << "  Nickname|" << std::endl;
	while (!phonebook[i].getFirstName().empty())
	{
		printData(phonebook[i], i);		
		i++;
	}
}

void PhoneBookEntity::printContactData(int index)
{
	if (phonebook[index - 1].getFirstName().empty() == true)
		std::cout << "Line is empty\n" << std::endl;
	else 
	{
		std::cout << "index: " << index << std::endl;
		std::cout << "First Name: " << phonebook[index - 1].getFirstName() << std::endl;
		std::cout << "Last Name: " << phonebook[index - 1].getLastName() << std::endl;
		std::cout << "NickName: " << phonebook[index - 1].getNickname() << std::endl;
		std::cout << "Phone Number: " << phonebook[index - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << phonebook[index - 1].getDarkestSecret() << "\n" << std::endl;
	}
}