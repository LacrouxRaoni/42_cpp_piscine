#include "easyfind.hpp"
#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>
\
int main(void)
{
	std::vector<int> vec;
	for (int i = 0; i < 3; i ++)
		vec.insert(2, i);
	easyfind();
}