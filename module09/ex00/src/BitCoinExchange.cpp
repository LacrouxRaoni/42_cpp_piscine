#include "BitcoinExchange.hpp"

BitCoinExchange::BitCoinExchange()
{
}

BitCoinExchange::BitCoinExchange(std::string fileIn)
{
	this->fileIn = fileIn;
}

BitCoinExchange::~BitCoinExchange()
{
}

BitCoinExchange::BitCoinExchange(BitCoinExchange const &rhs)
{
	*this = rhs;
}

BitCoinExchange& BitCoinExchange::operator=(const BitCoinExchange &rhs)
{
	if (this != &rhs)
	{
		this->fileIn = rhs.fileIn;
		this->map = rhs.map;
	}
	return *this;
}

static bool isLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool BitCoinExchange::validateDate(std::string date)
{
	int year, month, day;

	if (date.find_first_of('-') != 4 || date.find_last_of('-') != 7)
		return false;
	year = std::atoi(std::string(date.substr(0, 4)).c_str());
	month = std::atoi(std::string(date.substr(5, 7)).c_str());
	day = std::atoi(std::string(date.substr(8, 10)).c_str());
	if (year < 1 || year > 9999)
		return false;
	if (month < 1 || month > 12)
		return false;
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day < 1 || day > 30)
			return false;
	}
	else if (month == 2)
	{
		if ((isLeapYear(year)) && (day < 1 || day > 29))
			return false;
		else if (!isLeapYear(year) && (day < 1 || day > 28))
			return false;
	}
	else if (day < 1 || day > 31)
		return false;
	return true;
}

bool BitCoinExchange::validateNumberValue(std::string value, std::string line)
{
	for (size_t i = 1; i < value.length(); i++)
	{
		if (!std::isdigit(value.at(i)))
		{
			if (value.at(i) != '.' || (value.find_first_of('.') != value.find_last_of('.')) || i == value.length() - 1)
			{
				std::cout << "Error: bad input => " + line << std::endl;
				return false;
			}
		}
	}
	return true;
}

bool BitCoinExchange::validateValue(float value)
{
	if (value < 0)
		std::cout << "Error: not a positive number." << std::endl;
	else if (value > 1000)
		std::cout << "Error: too large a number." << std::endl;
	else
		return true;
	return false;
}

void BitCoinExchange::convertValue(std::string key, float value)
{
	std::map<std::string, float>::iterator it;

	key.erase(std::remove_if(key.begin(), key.end(), ::isspace), key.end());
	it = map.upper_bound(key);
	it--;
	std::cout << key << " => " << value << " = " << value * (*it).second << std::endl;
}

void BitCoinExchange::fileValidator()
{
	std::fstream file;
	std::string line, date, value;

	file.open(this->fileIn.c_str(), std::ios::in);
	if (file.is_open())
	{
		std::getline(file, line);
		while (std::getline(file, line))
		{
			if (line.find(" | ") == std::string::npos)
				std::cout << "Error: bad input => " + line << std::endl;
			else
			{
				std::istringstream iss(line);
				std::getline(iss, date, '|');
				if (!validateDate(date))
					std::cout << "Error: bad input => " + line << std::endl;
				else 
				{
					std::getline(iss, value, '|');
					float fValue = std::strtof(value.c_str(), NULL);
					if (validateNumberValue(value, line) && validateValue(fValue))
						convertValue(date, fValue);
				}
			}
		}
		file.close();
	}
	else 
	{
		throw BtcException("Can't open file");
	}
}

void BitCoinExchange::getMapData(std::string dataFile)
{
	std::string key, valueStr, line;
	std::fstream file; 
	file.open(dataFile.c_str(), std::ios::in);
	float value;
    
	if (file.is_open())
    {
        while (std::getline(file, line))
        {
            std::istringstream iss(line);
   	        std::getline(iss, key, ',');
            std::getline(iss, valueStr, ',');
			value = std::strtof(valueStr.c_str(), NULL);
            this->map[key] = value;
        }
        file.close();
    } 
	else 
	{
		throw BtcException("Can't open file");
	}
}
