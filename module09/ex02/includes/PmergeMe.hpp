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
		
		template<typename T, typename P>
		void sortList(T &lst, P &lstPair);

		template<typename T, typename P>
		void createPairLst(T &lst, P &lstPair);

		template<typename T, typename P>
		void sortPairLst(T &lst, P &lstPair, T &smallest);

		template<typename T>
		void sortLargestLst(T &lst);

		template<typename T>
		void mergeLst(T& smallest, T &lst);

};
#endif