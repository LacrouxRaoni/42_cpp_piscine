#include "Span.hpp"

Span::Span() : n(0)
{
}

Span::Span(unsigned int n)
{
	this->n = n;
}

Span::~Span()
{
}

Span::Span(const Span& rhs)
{
	*this = rhs;
}

Span& Span::operator=(Span const &rhs)
{
	if(this != &rhs)
	{
		this->n = rhs.n;
		this->lst = rhs.lst;
	}
	return *this;
}

unsigned int Span::getN() const
{
	return this->n;
}

void Span::addNumber(int new_n)
{
	if (this->lst.size() == this->getN())
		throw SpanException("List is full");
	else
	{
		this->lst.push_back(new_n);
	}	
}

int Span::shortestSpan()
{
	checkListElements();
	std::list<int>::iterator it = this->lst.begin();
	int min_distance = this->lst.back();
	while (++it != this->lst.end())
	{
		int distance = *it - *(--it);
		if (distance < min_distance)
			min_distance = distance;
		++it;
	}
	return	min_distance;
}

int Span::longestSpan()
{
	checkListElements();
	return this->lst.back() - this->lst.front();

}

void Span::addManyNumbers(std::list<int>::iterator itb, std::list<int>::iterator ite)
{
	if (static_cast<unsigned int>(*ite) > this->getN())
		throw SpanException("current list is lowest than total elements received");
	for (;itb != ite; itb++){
		this->addNumber(*itb);
	}
}

void Span::checkListElements()
{
	this->lst.sort();
	if (this->lst.size() < 1)
		throw SpanException("List is empty");
	else if (this->lst.size() == 1)
		throw SpanException("List have one element only");
}
