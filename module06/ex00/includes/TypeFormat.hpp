#ifndef TYPEFORMAT_HPP
#define TYPEFORMAT_HPP

#include <string>
#include <iostream>
#include <cstring>

class TypeFormat
{
	protected:
		std::string str;
		bool isChar();
		bool isInteger();
		bool isDouble();
		bool isFloat();
	public:
		TypeFormat();
		TypeFormat(const TypeFormat& typeFormat);
		~TypeFormat();
		TypeFormat& operator=(TypeFormat const &typeFormat);
};

#endif