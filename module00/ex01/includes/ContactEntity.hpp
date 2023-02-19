/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactEntity.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:58:58 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 10:58:59 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTENTITY_HPP
#define CONTACTENTITY_HPP

#include <iostream>

class ContactEntity
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	
	public:
		ContactEntity();
		ContactEntity(std::string firstName,
					  std::string lastName,
					  std::string nickname,
					  std::string phoneNumber,
					  std::string darkestSecret);
		~ContactEntity();

	std::string getFirstName();

	std::string getLastName();

	std::string getNickname();

	std::string getPhoneNumber();

	std::string getDarkestSecret();
};
#endif
