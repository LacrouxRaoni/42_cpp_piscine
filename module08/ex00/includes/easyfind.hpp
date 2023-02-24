#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>

template<typename T>
void easyfind(T& type, int n)
{
	std::vector<int> vec;
	std::vector<int>::iterator it;

	for (it = vec.begin() ; it != vec.end(); it++)
	{
		if (*it == n)
			std::cout << *it << std::endl;
	}
}


#endif