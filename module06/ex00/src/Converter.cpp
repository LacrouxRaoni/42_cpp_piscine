#include "Converter.hpp"

CharConverter ch;
IntConverter  in;
DoubleConverter db;
FloatConverter ft;

Converter::Converter() : TypeFormat()
{
}

Converter::Converter(std::string str) : TypeFormat()
{
	this->str = str;
}

Converter::Converter(const Converter& converter) : TypeFormat()
{
	*this = converter;
}

Converter::~Converter()
{
}

Converter& Converter::operator=(Converter const &converter)
{
	if (this != &converter)
	{
		this->str = converter.str;
	}
	return *this;
}

void Converter::converterChecker(){

	if(this->isChar())
		ch.convertToChar(this->str);
	else if (this->isInteger())
		in.checkIntToConvert(this->str);
	else if (this->isDouble())
		db.checkDoubleToConvert(this->str);
	else if (this->isFloat())
		ft.checkFloatToConvert(this->str);
	else
		std::cout << "impossible" << std::endl;
}



