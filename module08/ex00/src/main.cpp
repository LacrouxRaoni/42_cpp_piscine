#include "easyfind.hpp"

int main(void)
{
	srand(time(NULL));

	std::vector<int> a;
	a.assign(10, 42);
	easyfind(a, 42);
	easyfind(a, 33);
}
