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
		std::string token;
		bool createTokens(int i);
	public:
		Rpn();
		Rpn(std::string expression);
		Rpn(Rpn const &rhs);
		~Rpn();
		Rpn& operator=(const Rpn &rhs);
		bool createStack();
		void mathTime();
};
#endif