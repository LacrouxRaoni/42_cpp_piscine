#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>

template<typename T>
void easyfind(T type, int n)
{
	typename T::iterator it;
	it = std::find(type.begin(), type.end(), n);
	if (*it == n)
		std::cout << *it << std::endl;
	else
		std::cout << "not found" << std::endl;
}

#endif