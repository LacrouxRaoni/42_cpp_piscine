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

void PmergeMe::createLists(char **args)
{
	int i;

	i = 1;
	while (args[i])
	{
		if (std::atoi(args[i]) <= 0)
		{
			std::cout << "Error" << std::endl;
			return ;
		}
		lst.push_back(std::atoi(args[i]));
		deq.push_back(std::atoi(args[i]));
		i++;
	}
}

template<typename T> void PmergeMe::mergeSort(T &element)
{
	if (element.size() <= 1)
		return ;

	T left;
	T right;
	size_t size = element.size();

	for (size_t i = 0; i < size; i++)
	{
		if (i < size / 2)
			left.push_back(element.front());
		else
			right.push_back(element.front());
		element.pop_front();
	}
	mergeSort(left);
	mergeSort(right);
	merge(left, right, element);
}


template<typename T> void PmergeMe::merge(T &left, T &right, T &element)
{
	while (!left.empty() && !right.empty())
	{
		if (left.front() < right.front())
		{
			element.push_back(left.front());
			left.pop_front();
		}
		else
		{
			element.push_back(right.front());
			right.pop_front();
		}
	}
	while (!left.empty())
	{
		element.push_back(left.front());
		left.pop_front();
	}
	while (!right.empty())
	{
		element.push_back(right.front());
		right.pop_front();
	}
}

void PmergeMe::callSort()
{
	timeval start;
	timeval t_lst;
	timeval t_deq;

	gettimeofday(&start, NULL);
	this->mergeSort(this->lst);
	gettimeofday(&t_lst, NULL);
	timersub(&t_lst, &start, &t_lst);

	std::cout << "After: ";
	for(std::list<int>::iterator it = this->lst.begin(); it != lst.end(); it++)
		std::cout << (*it) << " ";
	std::cout << std::endl;
	std::cout << "time: " << t_lst.tv_usec << std::endl;

	std::cout << std::endl;

	gettimeofday(&start, NULL);
	this->mergeSort(this->deq);
	gettimeofday(&t_deq, NULL);
	timersub(&t_deq, &start, &t_deq);
	std::cout << "After: ";
	for(std::deque<int>::iterator it = this->deq.begin(); it != deq.end(); it++)
		std::cout << (*it) << " ";
	std::cout << std::endl;
	std::cout << "time: " << t_deq.tv_usec << std::endl;
}