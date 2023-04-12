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
		std::list<int> lst;
		std::deque<int> deq;
	public:
		PmergeMe();
		PmergeMe(PmergeMe const &rhs);
		~PmergeMe();
		PmergeMe& operator=(const PmergeMe &rhs);
		void createLists(int argc, char **args);
		void callSort();
		void sort(std::list<int> &lst);
		std::list<std::pair<int, int> > createPair(std::list<int> &lst);
		std::list<int> sortPair(std::list<std::pair<int, int> > &lstPair);
		void sortLargestList();
		void merge(std::list<int> smallest);
};
#endif