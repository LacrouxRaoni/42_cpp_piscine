#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include "TypeFormat.hpp"
#include "CharConverter.hpp"
#include "IntConverter.hpp"
#include "DoubleConverter.hpp"

#include <stdlib.h>
#include <limits>
#include <iomanip>

class Converter : public TypeFormat
{
	public:
		Converter();
		Converter(std::string str);
		Converter(const Converter& converter);
		~Converter();
		Converter& operator=(Converter const& converter);
		void converterChecker();
};

#endif