/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz-la <rruiz-la@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:58:17 by rruiz-la          #+#    #+#             */
/*   Updated: 2023/01/24 14:58:18 by rruiz-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::fractBits = 8;

Fixed::Fixed() : raw(0)
{
}

Fixed::Fixed(const Fixed& newFixed)
{
	Fixed::operator=(newFixed);
}

Fixed::Fixed (const int i)
{
	raw = i << fractBits;
}

Fixed::Fixed (const float f)
{
	raw = roundf(f * (float)(1 << fractBits));
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed &newFixed)
{
	this->setRawBits(newFixed.getRawBits());
	return *this;
}

bool Fixed::operator>(const Fixed& fixed) const{
	if (raw > fixed.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<(const Fixed& fixed) const{
	if (raw < fixed.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed& fixed) const{
	if (raw >= fixed.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed& fixed) const{
	if (raw <= fixed.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(const Fixed& fixed) const{
	if (raw == fixed.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed& fixed) const{
	if (raw != fixed.getRawBits())
		return true;
	return false;
}

Fixed Fixed::operator+(const Fixed& fixed) const{
	return this->toFloat() + fixed.toFloat();
}

Fixed Fixed::operator-(const Fixed& fixed) const{
	return toFloat() - fixed.toFloat();
}

Fixed Fixed::operator*(const Fixed& fixed) const{
	return this->toFloat() * fixed.toFloat();
}

Fixed Fixed::operator/(const Fixed& fixed) const{
	return this->toFloat() / fixed.toFloat();
}

Fixed& Fixed::operator++(void){
	this->raw += 1;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed tmp = *this;
	++(*this);
	return tmp;
}

Fixed& Fixed::operator--(void){
	this->raw -= 1;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed tmp = *this;
	--(*this);
	return tmp;
}

Fixed Fixed::min(Fixed& a, Fixed& b){
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed Fixed::min(const Fixed& a, const Fixed& b){
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed Fixed::max(Fixed& a, Fixed& b){
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

Fixed Fixed::max(const Fixed& a, const Fixed& b){
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

int Fixed::getRawBits( void ) const 
{
	return this->raw;
}

void Fixed::setRawBits( int const raw )
{
	this->raw = raw;
}

float Fixed::toFloat( void ) const
{
	float f;

	f = ((float)getRawBits() / (float)(1 << fractBits));	
	return f;
}

int Fixed::toInt( void ) const
{
	float i;

	i = getRawBits() >> fractBits;
	return i;
}


std::ostream& operator<<(std::ostream& output, const Fixed& fixed)
{
	output << fixed.toFloat();
	return output;
}
