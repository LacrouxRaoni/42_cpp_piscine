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
		
		
		void sortList(std::list<int> &lst);
		std::list<std::pair<int, int> > createPairLst(std::list<int> &lst);
		std::list<int> sortPairLst(std::list<std::pair<int, int> > &lstPair);
		void sortLargestLst();
		void mergeLst(std::list<int> smallest);

		void sortDeque(std::deque<int> &dq);
		std::deque<std::pair<int, int> > createPairDq(std::deque<int> &dq);
		std::deque<int> sortPairDq(std::deque<std::pair<int, int> > &dqPair);
		void sortLargestDq();
		void mergeDq(std::deque<int> smallest);
};
#endif