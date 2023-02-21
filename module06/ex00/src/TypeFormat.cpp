#include "TypeFormat.hpp"

TypeFormat::TypeFormat(){
}

TypeFormat::TypeFormat(const TypeFormat& typeFormat){
	*this = typeFormat;
}

TypeFormat::~TypeFormat(){
}

TypeFormat& TypeFormat::operator=(TypeFormat const &typeFormat){
	if (this != &typeFormat)
	{
		this->str = typeFormat.str;
	}
	return *this;
}

bool TypeFormat::isChar(){
	return (this->str.length() == 1 && std::isalpha(this->str.at(0)));
}

bool TypeFormat::isInteger(){
	for (unsigned int i = 0; i < this->str.length(); i++){
		if (i == 0 && (this->str.at(0) == '+' || this->str.at(0) == '-')){
			continue ;
		}
		if (!std::isdigit(this->str.at(i)))
			return false;
	}
	return true;
}

bool TypeFormat::isDouble(){
	if (this->str.compare("-inf") == 0 || this->str.compare("+inf") == 0 || this->str.compare("nan") == 0)
		return true;
	for (unsigned int i = 0; i < this->str.length(); i++){
		if (i == 0 && (this->str.at(0) == '+' || this->str.at(0) == '-'))
			continue ;
		if ((this->str[i] != '.' && !std::isdigit(this->str[i])) || this->str[this->str.length() - 1] == '.')
			return false;
	}
	return (this->str.find_first_of('.', 1) == this->str.find_last_of('.'));
}

bool TypeFormat::isFloat(){
	if (this->str.compare("-inff") == 0 || this->str.compare("+inff") == 0 || this->str.compare("nanf") == 0)
		return true;
	if (std::strchr( this->str.c_str(), '.') != NULL && std::strchr( this->str.c_str(), 'f') != NULL)
	{
		unsigned int j = 0;
		for (unsigned int i = 0; i < this->str.length(); i++){
			if (i == 0 && (this->str.at(0) == '+' || this->str.at(0) == '-'))
				continue ;
			if (this->str[i] == '.')
			{
				j = i;
				if (this->str[this->str.length() - 1] != 'f')
					return false;
				break ;
			}
		}
		while (++j < this->str.length() - 1)
		{
			if (!std::isdigit(this->str.at(j)))
				return false;
		}
		return (this->str.find_first_of('.', 1) == this->str.find_last_of('.'));
	}
	return false;
}