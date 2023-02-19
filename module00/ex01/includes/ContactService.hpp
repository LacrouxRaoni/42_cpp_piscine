/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactService.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:59:01 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 10:59:02 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTSERVICE_HPP
#define CONTACTSERVICE_HPP

#include <iostream>
#include "ContactEntity.hpp"
#include "PhoneBookEntity.hpp"

class ContactService
{
	private:
		static bool checkIfIsBlank(std::string fName,
					   			   std::string lName,
					   			   std::string nickName,
					   			   std::string phoneNumber,
					   			   std::string darkestSecret);
		static bool checkIfIsAlphaNum(std::string word);
		static bool validPhoneNumber(std::string phoneNumber);
		static bool validation(std::string fName,
					   		   std::string lName,
					   		   std::string nickName,
					   		   std::string phoneNumber,
					   		   std::string darkestSecret);
	public:
		static void addContact();
};

#endif