#include "IntConverter.hpp"

IntConverter::IntConverter(){
}

IntConverter::IntConverter(char c){
	this->c = c;
	std::cout << "int: ";
	std::cout << static_cast<int>(this->c) << std::endl;
}

IntConverter::IntConverter(float f){
	this->f = f;
	std::cout << "int: ";
	if (this->f >= -2147483648.0f && this->f <=  2147483647.0f){
		std::cout << static_cast<int>(this->f) << std::endl;
	}
	else
		std::cout << "Impossible" << std::endl;
}

IntConverter::IntConverter(double d){
	this->d = d;
	std::cout << "int: ";
	if (this->d >= -2147483648 && this->d <= 2147483647){
		std::cout << static_cast<int>(this->d) << std::endl;
	}
	else
		std::cout << "Impossible" << std::endl;
}

IntConverter::IntConverter(const IntConverter& intConverter)
{
	*this = intConverter;
}

IntConverter::~IntConverter()
{
}

IntConverter& IntConverter::operator=(IntConverter const& intConverter)
{
	if (this != &intConverter)
	{
		*this = intConverter;
	}
	return *this;
}

void IntConverter::checkIntToConvert(std::string str)
{
	long double number = std::strtold(str.c_str(), NULL);

	if (number >= -2147483648 && number <= 2147483647){
		convertToInt(str);
	}
	else
		std::cout << "Impossible" << std::endl;
}

void IntConverter::convertToInt(std::string str)
{
	int i = std::atoi(str.c_str());

	CharConverter chConv(i);
	printInt(i);
	FloatConverter fvConv(i);
	DoubleConverter dbConv(i);
}

void IntConverter::printInt(int i){
	std::cout << "int: ";
	std::cout << i << std::endl;
}
