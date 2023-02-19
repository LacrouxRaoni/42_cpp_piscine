/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:58:12 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/24 14:58:13 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(10);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	//custom tests
	std::cout << "sum: " << c.operator++() << std::endl;
	std::cout << "sub: " << c.operator--() << std::endl;
	std::cout << "multiply: " << c.operator*(2) << std::endl;
	std::cout << "divided: " << c.operator/(2) << std::endl;
	std::cout << "10 + 2 = " << c.operator+(2) << std::endl;
	std::cout << "10 - 2 = " << c.operator-(2) << std::endl;	
	std::cout << "c == 10: " << c.operator==(10) << std::endl;
	std::cout << "c != 9: " << c.operator==(9) << std::endl;
	std::cout << "c > 9: " << c.operator>(9) << std::endl;
	std::cout << "c >= 10: " << c.operator>=(10) << std::endl;
	std::cout << "c <= 10: " << c.operator<=(10) << std::endl;
	std::cout << "c < 11: " << c.operator<(11) << std::endl;
	return 0;
}