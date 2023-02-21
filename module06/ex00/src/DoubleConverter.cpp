#include "DoubleConverter.hpp"

DoubleConverter::DoubleConverter(){
}

DoubleConverter::DoubleConverter(char c){
	this->c = c;
	std::cout << "Double: ";
	std::cout << static_cast<double>(this->c) << ".0" << std::endl;
}

DoubleConverter::DoubleConverter(int i){
	this->i = i;
	std::cout << "Double: ";
	std::cout << static_cast<double>(this->i) << ".0" << std::endl;
}

DoubleConverter::DoubleConverter(float f){
	this->f = f;
	std::cout << "Double: ";
	if (f == static_cast<int>(f))
		std::cout << static_cast<double>(this->f) << ".0" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(this->f) << std::endl;
}

DoubleConverter::DoubleConverter(const DoubleConverter& doubleConverter)
{
	*this = doubleConverter;
}

DoubleConverter::~DoubleConverter(){
}

DoubleConverter& DoubleConverter::operator=(DoubleConverter const& doubleConverter)
{
	if (this != &doubleConverter)
	{
		*this = doubleConverter;
	}
	return *this;
}

void DoubleConverter::convertToDouble(std::string str)
{
	double d = std::strtod(str.c_str(), NULL);

	CharConverter chConv(d);
	IntConverter inConv(d);
	FloatConverter ftConv(d);
	printDouble(d);
}

void DoubleConverter::checkDoubleToConvert(std::string str)
{
	long double number = std::strtof(str.c_str(), NULL);

	if (str.compare("-inf") == 0 || str.compare("+inf") == 0 || str.compare("nan") == 0)
		printPseudoType(str.at(0), str.c_str());
	else
	{
		if ((number >= 2.22507e-308 && number <= 1.79769e+308) || number == 0)
		{
			convertToDouble(str);
		}
		else
			std::cout << "Impossible" << std::endl;
	}
}

void DoubleConverter::printPseudoType(int c, std::string str)
{
	std::cout << "char: Impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	switch(c){
		case 43:
			std::cout << "float: " << str.c_str() << "f" << std::endl;
			break;
		case 45:
			std::cout << "float: " << str.c_str() << "f" << std::endl;
			break;
		default:
			std::cout << "float: " << str.c_str() << "f" << std::endl;
			break;
	}
	std::cout << "double: " << str.c_str() << std::endl;
}

void DoubleConverter::printDouble(double d)
{
	std::cout << "double: ";
	if (static_cast<int>(d) == static_cast<double>(d)){
		std::cout << static_cast<double>(d) << ".0" << std::endl;
	} 
	else{
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(d) << std::endl;
	}
}