#include "easyfind.hpp"

int main(void)
{
	std::cout << "test1 vector: " << std::endl;
	std::vector<int> a;
	try
	{
		for (int i = 0; i < 10; i++)
			a.push_back(i);
		easyfind(a, 5);
		easyfind(a, 10);
	} 
	catch (std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\ntest2 list: " << std::endl;
	std::list<int> b;
	try {
		for (int i = 0; i < 5; i++){
			b.push_back(i + 10);
		}
		easyfind(b, 13);
		easyfind(b, 8);
	} 
	catch (std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\ntest3 deque: " << std::endl;
	std::deque<int> c;
	try 
	{	
		for (int i = 0; i < 5; i++){
			c.push_back(i);
		}
		easyfind(c, 3);
		easyfind(c, 10);
	}
	catch (std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
	}
}