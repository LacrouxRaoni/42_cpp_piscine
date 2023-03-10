#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <list>
#include <iterator>
#include <iostream>
#include <time.h>

class Span
{
	private:
		unsigned int n;
		std::list<int> lst;
	public:
		Span();
		Span(unsigned int n);
		~Span();
		Span(const Span& rhs);
		Span& operator=(Span const &rhs);
		unsigned int getN() const;
		void addNumber(int new_n);
		int shortestSpan();
		int longestSpan();
		void addManyNumbers(std::list<int>::iterator itb, std::list<int>::iterator ite);
		void checkListElements();
		class SpanException : public std::exception
		{
			private:
				std::string msg;
			public:
				SpanException(const std::string& msg) : msg(msg)
				{
				}

				virtual ~SpanException() throw()
        		{
        		}

				virtual const char* what() const throw()
				{
					return msg.c_str();
				}
		};
};

#endif