/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookService.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:59:07 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 10:59:08 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKSERVICE_HPP
#define PHONEBOOKSERVICE_HPP

#include <iostream>
#include "PhoneBookEntity.hpp"

class PhoneBookService
{

public:
	PhoneBookService();
	~PhoneBookService();

	void searchOption();
};
#endif
