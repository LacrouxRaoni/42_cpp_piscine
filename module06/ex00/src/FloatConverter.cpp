#include "FloatConverter.hpp"

FloatConverter::FloatConverter(){
}

FloatConverter::FloatConverter(char c){
	this->c = c;
	std::cout << "float: ";
	std::cout << static_cast<float>(this->c) << ".0f" << std::endl;
}

FloatConverter::FloatConverter(int i){
	this->i = i;
	std::cout << "float: ";
	std::cout << static_cast<float>(this->i) << ".0f" << std::endl;
}

FloatConverter::FloatConverter(double d){
	this->d = d;
	std::cout << "float: ";
	if (this->d >= 1.17549e-038  && this->d <= 3.40282e+038)
	{
		if (d == static_cast<int>(d))
			std::cout << static_cast<float>(this->d) << ".0f" << std::endl;
		else
			std::cout << std::fixed << std::setprecision(1) << static_cast<float>(this->d) << "f" << std::endl;
	}
	else
		std::cout << "Impossible" << std::endl;
}

FloatConverter::FloatConverter(const FloatConverter& floatConverter)
{
	*this = floatConverter;	
}

FloatConverter::~FloatConverter(){
}

FloatConverter& FloatConverter::operator=(FloatConverter const& floatConverter)
{
	if (this != &floatConverter)
	{
		*this = floatConverter;
	}
	return *this;
}

void FloatConverter::convertToFloat(std::string str)
{
	float f = std::strtof(str.c_str(), NULL);

	CharConverter chConv(f);
	IntConverter inConv(f);
	printFloat(f);
	DoubleConverter dbConv(f);
}

void FloatConverter::checkFloatToConvert(std::string str)
{
	long double number = std::strtof(str.c_str(), NULL);

	if (str.compare("-inff") == 0 || str.compare("+inff") == 0 || str.compare("nanf") == 0)
		printPseudoType(str.at(0), str.c_str());
	else {
		if ((number >= 1.17549e-038  && number <= 3.40282e+038) || number == 0)
			convertToFloat(str);
		else
			std::cout << "Impossible" << std::endl;	
	}
}

void FloatConverter::printPseudoType(int c, std::string str)
{
	std::cout << "char: Impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	std::cout << "float: " << str.c_str() << std::endl;
	switch(c){
		case 43:
			std::cout << "double: " << str.substr(0, 4) << std::endl;
			break;
		case 45:
			std::cout << "double: " << str.substr(0, 4) << std::endl;
			break;
		default:
			std::cout << "double: " << str.substr(0, 3) << std::endl;
			break;
	}
}

void FloatConverter::printFloat(float f){
	std::cout << "float: ";
	if (static_cast<int>(f) == static_cast<float>(f)){
		std::cout << static_cast<float>(f) << ".0f" << std::endl;
	} 
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << std::endl;
}
