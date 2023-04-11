#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string.h>
#include <algorithm>
#include <utility>

#include <list>
#include <deque>
#include <sys/time.h>

class PmergeMe
{
	private:
		std::list<std::pair<int, int> > lstPair;
		std::list<int> lst;
		std::deque<int> deq;
	public:
		PmergeMe();
		PmergeMe(PmergeMe const &rhs);
		~PmergeMe();
		PmergeMe& operator=(const PmergeMe &rhs);
		void createLists(int argc, char **args);
		void callSort();
		void createPair(std::list<int> lst);
		void sort(std::list<std::pair<int, int> > lst);


		void mergeSort(std::list<int> element);
		void merge(std::list<int> &left, std::list<int> &right, std::list<int> &element);
};
#endif