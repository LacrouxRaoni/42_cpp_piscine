#include "PmergeMe.hpp"


int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		PmergeMe pm;
		pm.createLists(argv);
		pm.callSort();
	}
	

	return (0);
}