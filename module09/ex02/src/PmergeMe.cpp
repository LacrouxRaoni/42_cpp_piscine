#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(PmergeMe const &rhs)
{
	*this = rhs;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe& PmergeMe::operator=(const PmergeMe &rhs)
{
	if (this != &rhs)
	{
		this->lst = rhs.lst;
		this->deq = rhs.deq;
	}
	return *this;
}

void PmergeMe::createLists(int argc, char **args)
{
	for (int i = 1; i < argc; i++)
	{
		for (size_t j = 0; j < strlen(args[i]); j++)
		{
			if (!std::isdigit(args[i][j]))
			{
				std::cout << "Error" << std::endl;
				return ;
			}
		}
		lst.push_back(std::atoi(args[i]));
		deq.push_back(std::atoi(args[i]));
	}
	callSort();
}



template<typename T, typename P>
void PmergeMe::createPairLst(T &lst, P &lstPair)
{
	int size = lst.size();
	while (!lst.empty())
	{
		int elem1 = lst.front();
		lst.pop_front();
		int elem2 = lst.front();
		lst.pop_front();
		lstPair.push_back(std::make_pair(elem1, elem2));
		if (lst.size() == 1 && size % 2 != 0)
		{
			elem1 = lst.front();
			lst.pop_front();
			lstPair.push_back(std::make_pair(elem1, -1));
		}
	}
}

template<typename T, typename P>
void PmergeMe::sortPairLst(T &lst, P &lstPair, T &smallest)
{
	for (typename P::iterator it = lstPair.begin(); it != lstPair.end(); it++)
	{
		if (it->second != -1 && it->first > it->second)
			std::swap(it->first, it->second);
		if (it->second != -1)
			lst.push_back(it->second);
		smallest.push_back(it->first);
	}
}

template<typename T>
void PmergeMe::sortLargestLst(T &lst)
{
	typename T::iterator i = lst.begin();
	typename T::iterator j = i;
	size_t size = lst.size();
	while (--size > 0)
	{
		j++;
		if (*i > *j)
		{
			std::swap(*i, *j);
			while (i != lst.begin())
			{
				typename T::iterator k = i;
				i--;
				if (*i > *k)
					std::swap(*i, *k);
				else
					break ;
			}
		}
		i = j;
	}
}

template<typename T>
void  PmergeMe::mergeLst(T &smallest, T &lst)
{
	for (typename T::iterator it = smallest.begin(); it != smallest.end(); ++it) 
	{
        typename T::iterator pos = std::lower_bound(lst.begin(), lst.end(), *it);
        lst.insert(pos, *it);
    }
}

template<typename T, typename P>
void PmergeMe::sortList(T &lst, P &lstPair)
{
	T smallest;

	if (lst.size() > 1){
		createPairLst(lst, lstPair);
		sortPairLst(lst, lstPair, smallest);
	}
	sortLargestLst(lst);
	mergeLst(smallest, lst);
}

void PmergeMe::callSort()
{

	timeval start;
	timeval t_lst;
	timeval t_deq;

	std::cout << "Before: ";
	for(std::list<int>::iterator it = this->lst.begin(); it != lst.end(); it++)
		std::cout << (*it) << " ";
	std::cout << std::endl;

	gettimeofday(&start, NULL);
	std::list<std::pair<int, int> > lstPair;
	this->sortList(this->lst, lstPair);
	gettimeofday(&t_lst, NULL);
	timersub(&t_lst, &start, &t_lst);

	std::cout << "After: ";
	for(std::list<int>::iterator it = this->lst.begin(); it != lst.end(); it++)
		std::cout << (*it) << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << this->lst.size() << " elements with std::list : " << t_lst.tv_sec + t_lst.tv_usec << " us" << std::endl;
	std::cout << std::endl;


	std::cout << "Before: ";
	for(std::deque<int>::iterator it = this->deq.begin(); it != deq.end(); it++)
		std::cout << (*it) << " ";
	std::cout << std::endl;

	gettimeofday(&start, NULL);

	std::deque<std::pair<int, int> > dqPair;
	this->sortList(this->deq, dqPair);
	gettimeofday(&t_deq, NULL);
	timersub(&t_deq, &start, &t_deq);
	std::cout << "After: ";
	for(std::deque<int>::iterator it = this->deq.begin(); it != deq.end(); it++)
		std::cout << (*it) << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << this->deq.size() << " elements with std::deque : " <<t_deq.tv_sec + t_deq.tv_usec << " us" << std::endl;

}
