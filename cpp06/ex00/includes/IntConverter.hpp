#ifndef INTCONVERTER_HPP
#define INTCONVERTER_HPP

#include "Converter.hpp"
#include "CharConverter.hpp"
#include "DoubleConverter.hpp"
#include "FloatConverter.hpp"

class IntConverter
{
	private:
		char	c;
		float	f;
		double	d;
		static void printInt(int i);
	public:
		IntConverter();
		IntConverter(char c);
		IntConverter(float f);
		IntConverter(double d);
		IntConverter(const IntConverter& intConverter);
		~IntConverter();
		IntConverter& operator=(IntConverter const& intConverter);
		static void convertToInt(std::string str);
		void checkIntToConvert(std::string str);
};

#endif