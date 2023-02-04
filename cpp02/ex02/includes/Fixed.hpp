/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:58:21 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/24 14:58:22 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string.h>

class Fixed
{
	private:
		int raw;
		static const int fractBits;
	public:
		Fixed();
		Fixed(const Fixed &a );
		Fixed (const int i);
		Fixed (const float f);
		~Fixed();
		Fixed& operator=(const Fixed &fixed);
		bool operator>(const Fixed& fixed) const;
		bool operator<(const Fixed& fixed) const;
		bool operator>=(const Fixed& fixed) const;
		bool operator<=(const Fixed& fixed) const;
		bool operator==(const Fixed& fixed) const;
		bool operator!=(const Fixed& fixed) const;
		Fixed operator+(const Fixed& fixed) const;
		Fixed operator-(const Fixed& fixed) const;
		Fixed operator*(const Fixed& fixed) const;
		Fixed operator/(const Fixed& fixed) const;
		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);

		static Fixed min(Fixed& a, Fixed& b);
		static Fixed min(const Fixed& a, const Fixed& b);
		static Fixed max(Fixed& a, Fixed& b);
		static Fixed max(const Fixed& a, const Fixed& b);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;


};

std::ostream& operator<<(std::ostream& output, const Fixed& fixed);

#endif