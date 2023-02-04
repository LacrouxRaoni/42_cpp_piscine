/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookEntity.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:59:05 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 10:59:06 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKENTITY_HPP
#define PHONEBOOKENTITY_HPP

#include <iostream>
#include "ContactEntity.hpp"
#include "PhoneBookEntity.hpp"

class PhoneBookEntity
{
	private:
		static ContactEntity phonebook[8];
		static int index;
	public:
		PhoneBookEntity();
		~PhoneBookEntity();

	private:
		static std::string columnCustomize(std::string word);
		static void printData(ContactEntity contact, int i);

	public:
		void saveContact(ContactEntity contact);
		void printList(void);
		void printContactData(int index);
};
#endif