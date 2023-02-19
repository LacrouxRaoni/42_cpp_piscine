#include "CharConverter.hpp"

CharConverter::CharConverter(){
}

CharConverter::CharConverter(int i){
	this->i = i;

	std::cout << "char: ";
	if (this->i >= 0 && this->i <= 32)
		std::cout << "Non displayable" << std::endl;
	else if (this->i >= 33 && this->i <= 126)
		std::cout << static_cast<char>(this->i) << std::endl;
	else
		std::cout << "Impossible" << std::endl;
}

CharConverter::CharConverter(float f){
	this->f = f;

	std::cout << "char: ";
	if (this->f >= 0 && this->f <= 32)
		std::cout << "Non displayable" << std::endl;
	else if (this->f >= 33 && this->f <= 126)
		std::cout << static_cast<char>(this->f) << std::endl;
	else
		std::cout << "Impossible" << std::endl;
}

CharConverter::CharConverter(double d){
	this->d = d;

	std::cout << "char: ";
	if (this->d >= 0 && this->d <= 32)
		std::cout << "Non displayable" << std::endl;
	else if (this->d >= 33 && this->d <= 126)
		std::cout << static_cast<char>(this->d) << std::endl;
	else
		std::cout << "Impossible" << std::endl;
}

CharConverter::CharConverter(const CharConverter& charConverter){
	*this = charConverter;
}

CharConverter::~CharConverter(){
}

CharConverter& CharConverter::operator=(CharConverter const& charConverter){
	if (this != &charConverter)
	{
		*this = charConverter;
	}
	return *this;
}

void CharConverter::convertToChar(std::string str){

	printChar(str.at(0));
	IntConverter inConv(str.at(0));
	FloatConverter(str.at(0));
	DoubleConverter dbConv(str.at(0));
}

void CharConverter::printChar(char ch){
	std::cout << "char: ";
	std::cout << ch << std::endl;
}
