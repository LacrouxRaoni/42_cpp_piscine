#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T& x, T& y)
{
	T aux;

	aux = x;
	x = y;
	y = aux;
}

template<typename T>
T const min(T const& x, T const& y)
{
	return (x >= y ? y : x);
}

template<typename T>
T const max(T const& x, T const& y)
{
	return (x <= y ? y : x);
}

#endif