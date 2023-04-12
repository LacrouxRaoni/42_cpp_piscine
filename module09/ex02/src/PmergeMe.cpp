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






std::list<std::pair<int, int> > PmergeMe::createPairLst(std::list<int> &lst)
{
	std::list<std::pair<int, int> > newLstPair;

	int size = lst.size();
	while (!lst.empty())
	{
		int elem1 = lst.front();
		lst.pop_front();
		int elem2 = lst.front();
		lst.pop_front();
		newLstPair.push_back(std::make_pair(elem1, elem2));
		if (lst.size() == 1 && size % 2 != 0)
		{
			elem1 = lst.front();
			lst.pop_front();
			newLstPair.push_back(std::make_pair(elem1, -1));
		}
	}
	return newLstPair;
}

std::list<int> PmergeMe::sortPairLst(std::list<std::pair<int, int> > &lstPair)
{
	std::list<int> smallest; 
	for (std::list<std::pair<int, int> >::iterator it = lstPair.begin(); it != lstPair.end(); it++)
	{
		if (it->second != -1 && it->first > it->second)
			std::swap(it->first, it->second);
		if (it->second != -1)
			lst.push_back(it->second);
		smallest.push_back(it->first);
	}
	return smallest;		
}

void PmergeMe::sortLargestLst()
{
	std::list<int>::iterator i = lst.begin();
	std::list<int>::iterator j = i;
	size_t size = lst.size();
	while (--size > 0)
	{
		j++;
		if (*i > *j)
		{
			std::swap(*i, *j);
			while (i != lst.begin())
			{
				std::list<int>::iterator k = i;
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

void  PmergeMe::mergeLst(std::list<int> smallest)
{
	for (std::list<int>::iterator it = smallest.begin(); it != smallest.end(); ++it) 
	{
        std::list<int>::iterator pos = std::lower_bound(lst.begin(), lst.end(), *it);
        lst.insert(pos, *it);
    }
}

void PmergeMe::sortList(std::list<int> &lst)
{
	std::list<std::pair<int, int> > lstPair = createPairLst(lst);
	std::list<int> smallest = sortPairLst(lstPair);
	sortLargestLst();
	mergeLst(smallest);
}








std::deque<std::pair<int, int> > PmergeMe::createPairDq(std::deque<int> &deq)
{
	std::deque<std::pair<int, int> > newDqPair;

	int size = deq.size();
	while (!deq.empty())
	{
		int elem1 = deq.front();
		deq.pop_front();
		int elem2 = deq.front();
		deq.pop_front();
		newDqPair.push_back(std::make_pair(elem1, elem2));
		if (deq.size() == 1 && size % 2 != 0)
		{
			elem1 = deq.front();
			deq.pop_front();
			newDqPair.push_back(std::make_pair(elem1, -1));
		}
	}
	return newDqPair;
}

std::deque<int> PmergeMe::sortPairDq(std::deque<std::pair<int, int> > &dqPair)
{
	std::deque<int> smallest; 
	for (std::deque<std::pair<int, int> >::iterator it = dqPair.begin(); it != dqPair.end(); it++)
	{
		if (it->second != -1 && it->first > it->second)
			std::swap(it->first, it->second);
		if (it->second != -1)
			deq.push_back(it->second);
		smallest.push_back(it->first);
	}
	return smallest;		
}

void PmergeMe::sortLargestDq()
{
	std::deque<int>::iterator i = deq.begin();
	std::deque<int>::iterator j = i;
	size_t size = deq.size();
	while (--size > 0)
	{
		j++;
		if (*i > *j)
		{
			std::swap(*i, *j);
			while (i != deq.begin())
			{
				std::deque<int>::iterator k = i;
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

void  PmergeMe::mergeDq(std::deque<int> smallest)
{
	for (std::deque<int>::iterator it = smallest.begin(); it != smallest.end(); ++it)
	{
        std::deque<int>::iterator pos = std::lower_bound(deq.begin(), deq.end(), *it);
        deq.insert(pos, *it);
    }
}

void PmergeMe::sortDeque(std::deque<int> &deq)
{
	std::deque<std::pair<int, int> > dqPair = createPairDq(deq);
	std::deque<int> smallest = sortPairDq(dqPair);
	sortLargestDq();
	mergeDq(smallest);
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
	this->sortList(this->lst);
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
	this->sortDeque(this->deq);
	gettimeofday(&t_deq, NULL);
	timersub(&t_deq, &start, &t_deq);
	std::cout << "After: ";
	for(std::deque<int>::iterator it = this->deq.begin(); it != deq.end(); it++)
		std::cout << (*it) << " ";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << this->deq.size() << " elements with std::deque : " <<t_deq.tv_sec + t_deq.tv_usec << " us" << std::endl;
}
