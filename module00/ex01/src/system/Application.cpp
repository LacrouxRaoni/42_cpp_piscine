/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Application.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:59:48 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 10:59:49 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Application.h"


static void displayMenu()
{
	std::cout << "Please Select: \n";
	std::cout << "1: ADD \n";
	std::cout << "2: SEARCH \n";
	std::cout << "0: EXIT \n";
	std::cout << "Option: ";
}

static bool getOption()
{
	char option; 
	ContactService contact;
	PhoneBookService phone;
	

	std::cin.get(option);
	std::cin.ignore(1,'\n');
	if (option == '0')
		return false ;
	else if (option == '1' || option == '2')
	{
		if (option == '1')
			contact.addContact();
		else
			phone.searchOption();
	}
	else{
		std::cout << "\ninvalid option\n" << std::endl;
	}
	return true;
}

int main(void)
{
	std::cout << "WELCOME TO MY AWEASOME PHONEBOOK!" << std::endl;
	while (true)
	{
		displayMenu();
		if (!getOption())
			break ;
	}
}
