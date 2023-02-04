#ifndef FLOATCONVERTER_HPP
#define FLOATCONVERTER_HPP

#include "Converter.hpp"

class FloatConverter
{
	private:
		char	c;
		int		i;
		double	d;
		static void printFloat(float f);
	public:
		FloatConverter();
		FloatConverter(char c);
		FloatConverter(int i);
		FloatConverter(double d);
		FloatConverter(const FloatConverter& floatConverter);
		~FloatConverter();
		FloatConverter& operator=(FloatConverter const& floatConverter);
		static void convertToFloat(std::string str);
		void checkFloatToConvert(std::string str);
		static void printPseudoType(int c, std::string str);
};

#endif
