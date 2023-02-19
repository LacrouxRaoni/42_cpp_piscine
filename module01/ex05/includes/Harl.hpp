/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:01:33 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/23 11:01:34 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void message( void );
	public:
		void complain( std::string level );
		int levelToIndex(std::string level);
};

#endif