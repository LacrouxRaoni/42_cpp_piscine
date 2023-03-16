#include "RPN.hpp"

Rpn::Rpn()
{
}

Rpn::Rpn(std::string expression)
{
	this->expression = expression;
}

Rpn::Rpn(Rpn const &rhs)
{
	*this = rhs;
}

Rpn::~Rpn()
{
}

Rpn& Rpn::operator=(const Rpn &rhs)
{
	if(this != &rhs)
	{
		this->expression = rhs.expression;
		this->s = rhs.s;
	}
	return *this;
}

void Rpn::checkTokens(int i)
{
	std::string tmp;
	int a = 0;
	int b = 0;

	a = s.top();
	s.pop();
	b = s.top();
	s.pop();
	switch(this->expression.at(i))
	{
		case '+':
			s.push(b + a);
			break;
		case '-':
			s.push(b - a);
			break ;
		case '*':
			s.push(b * a);
			break ;
		case '/':
			if (a == 0)
				throw RpnException("It can't divide by 0");
			s.push(b / a);
			break ;
		default:
			throw RpnException("Invalid arguments");
	}
}

bool Rpn::createStack()
{
	std::string tmp;
	long unsigned int i = -1;

	while(++i < this->expression.length())
	{
		if (std::isdigit(this->expression.at(i)))
		{
			if (std::isspace(this->expression.at(i + 1)))
			{
				tmp = this->expression.at(i);
				s.push(std::atoi(tmp.c_str()));
			}
			else
				throw RpnException("Invalid number of arguments");
		}
		else
		{
			if (this->s.size() > 1 && this->expression.at(i) != ' ')
				checkTokens(i);
		}
	}
	if (this->s.size() == 1)
		std::cout << this->s.top() << std::endl;
	else
	{
		std::cout << this->s.top() << std::endl;
		this->s.pop();
		std::cout << this->s.top() << std::endl;
	}

	return (true);
}

