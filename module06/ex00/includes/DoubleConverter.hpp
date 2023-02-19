#ifndef DOUBLECONVERTER_HPP
#define DOUBLECONVERTER_HPP

#include "Converter.hpp"
#include "CharConverter.hpp"
#include "IntConverter.hpp"
#include "FloatConverter.hpp"

class DoubleConverter
{
	private:
		char	c;
		int		i;
		float	f;
		static void printDouble(double d);
	public:
		DoubleConverter();
		DoubleConverter(char c);
		DoubleConverter(int i);
		DoubleConverter(float f);
		DoubleConverter(const DoubleConverter& doubleConverter);
		~DoubleConverter();
		DoubleConverter& operator=(DoubleConverter const& doubleConverter);
		static void convertToDouble(std::string str);
		void checkDoubleToConvert(std::string str);
		static void printPseudoType(int c, std::string str);
};

#endif