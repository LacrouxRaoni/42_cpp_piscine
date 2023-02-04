#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arrAdd, size_t size, void (*function)(T &))
{
	for (size_t i = 0; i < size; i++){
		function(arrAdd[i]);
	}
}

template<typename T>
void printElement(T element)
{
	std::cout << element << std::endl;
}

template<typename T>
void sumElement(T &element)
{
	element++;
}

void sumElement(std::string &element)
{
	std::cout << "Not possible to sum String" << std::endl;
	static_cast<void>(element);
	
}

#endif