/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactEntity.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:59:12 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 10:59:13 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactEntity.hpp"

	ContactEntity::ContactEntity(){
	}


	ContactEntity::ContactEntity(std::string firstName,
								 std::string lastName,
								 std::string nickname,
								 std::string phoneNumber,
								 std::string darkestSecret)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->nickname = nickname;
		this->phoneNumber = phoneNumber;
		this->darkestSecret = darkestSecret;
	}

	ContactEntity::~ContactEntity()
	{
		return ;
	}

	std::string ContactEntity::getFirstName()
	{
		return (firstName);
	}

	std::string ContactEntity::getLastName()
	{
		return lastName;
	}

	std::string ContactEntity::getNickname()
	{
		return nickname;
	}

	std::string ContactEntity::getPhoneNumber()
	{
		return phoneNumber;
	}

	std::string ContactEntity::getDarkestSecret()
	{
		return darkestSecret;
	}

