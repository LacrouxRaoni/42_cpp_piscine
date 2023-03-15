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
		this->token = rhs.token;
	}
	return *this;
}

bool Rpn::createTokens(int i)
{
	std::string tmp;

	switch(this->expression.at(i))
	{
		case '+':
			tmp = this->expression.at(i);
			this->token.append(tmp.c_str());
			break ;
		case '-':
			tmp = this->expression.at(i);
			this->token.append(tmp.c_str());
			break ;
		case '*':
			tmp = this->expression.at(i);
			this->token.append(tmp.c_str());
			break ;
		case '/':
			tmp = this->expression.at(i);
			this->token.append(tmp.c_str());
			break ;
		case ' ':
			break ;
		default:
			return (false);
	}
	return (true);
}

bool Rpn::createStack()
{
	std::string tmp;
	int i = this->expression.length();

	while(--i > -1)
	{
		if (std::isdigit(this->expression.at(i)))
		{
			if (std::isspace(this->expression.at(i + 1)))
			{
				tmp = this->expression.at(i);
				s.push(std::atoi(tmp.c_str()));
			}
			else
				return (false);
		}
		else
		{
			if (!createTokens(i))
				return (false);
		}
	}
	return (true);
}

void Rpn::mathTime()
{
	int a = 0;
	int b = 0;
	int i = this->token.size();
	while(this->s.size() > 1)
	{
		a = s.top();
		s.pop();
		b = s.top();
		s.pop();
		
		switch (this->token.at(--i))
		{
			case '+':
				s.push(a + b);
				break;
			case '-':
				s.push(a - b);
				break ;
			case '*':
				s.push(a * b);
				break ;
			case '/':
				s.push(a / b);
				break ;
		}
	}
	std::cout << s.top() << std::endl;
}
