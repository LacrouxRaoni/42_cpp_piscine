#include "Span.hpp"

int main(void)
{
	{
		std::cout << "Test1 pdf" << std::endl;
		try
		{
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;


			std::cout << "\nTest2 list is full" << std::endl;
			sp.addNumber(20);
		}
		catch (Span::SpanException &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTest3 shortestSpan exception" << std::endl;
		Span a = Span(1);
		try 
		{
			a.addNumber(11);
			a.shortestSpan();
			a.longestSpan();
		}
		catch (Span::SpanException &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTest4 longestSpan exception" << std::endl;
		Span a = Span(1);
		try 
		{
			a.addNumber(11);
			a.longestSpan();
		}
		catch (Span::SpanException &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTest5 num args bigger than list" << std::endl;
		try
		{
			Span c = Span(5);
			std::list<int> b;
			for (int i = 0; i < 8; i++)
				b.push_back(i);
			c.addManyNumbers(b);
		}
		catch (Span::SpanException &e)
		{
			std::cout << e.what() << std::endl;
		}		
	}	
	{
		std::cout << "\nTest6 add many numbers" << std::endl;
		try
		{
			Span c = Span(20000);
			std::list<int> l;
			for (int i = 0; i < 20000; i++)
				l.push_back(i);
			c.addManyNumbers(l);
			std::cout << c.shortestSpan() << std::endl;
			std::cout << c.longestSpan() << std::endl;
		}
		catch (Span::SpanException &e)
		{
			std::cout << e.what() << std::endl;
		}		
	}
}