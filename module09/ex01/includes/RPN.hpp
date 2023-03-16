#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <cstdlib>


class Rpn
{
	private:
		std::string expression;
		std::stack<int> s;
		void checkTokens(int i);
	public:
		Rpn();
		Rpn(std::string expression);
		Rpn(Rpn const &rhs);
		~Rpn();
		Rpn& operator=(const Rpn &rhs);
		bool createStack();

		class RpnException : public std::exception
		{
			private:
				std::string msg;
			public:
				RpnException(const std::string &msg) : msg(msg) {}
				virtual ~RpnException() throw() {}
				virtual const char* what() const throw()
				{
					return msg.c_str();
				}
		};
};
#endif