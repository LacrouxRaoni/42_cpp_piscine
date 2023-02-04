#ifndef CHARCONVERTER_HPP
#define CHARCONVERTER_HPP

#include "Converter.hpp"

class CharConverter
{
	private: 
		int i;
		float f;
		double d;
		static void printChar(char ch);
	public:
		CharConverter();
		CharConverter(int i);
		CharConverter(float f);
		CharConverter(double d);
		CharConverter(const CharConverter& charConverter);
		~CharConverter();
		CharConverter& operator=(CharConverter const& charConverter);
		void convertToChar(std::string str);
};
#endif