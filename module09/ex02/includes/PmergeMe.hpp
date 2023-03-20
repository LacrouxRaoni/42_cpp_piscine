#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string.h>
#include <algorithm>
#include <list>
#include <deque>
#include <sys/time.h>

class PmergeMe
{
	private:
		std::list<int> lst;
		std::deque<int> deq;
	public:
		PmergeMe();
		PmergeMe(PmergeMe const &rhs);
		~PmergeMe();
		PmergeMe& operator=(const PmergeMe &rhs);
		void createLists(int argc, char **args);
		template<typename T> void mergeSort(T &element);
		template<typename T> void merge(T &left, T &right, T &element);
		void callSort();
};
#endif