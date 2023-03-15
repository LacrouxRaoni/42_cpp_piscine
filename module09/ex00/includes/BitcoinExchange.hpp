#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>
#include <algorithm>

#define CSVFILE "data.csv"

class BitCoinExchange 
{
	private:
		std::string fileIn;
		std::map<std::string, float> map;
		bool validateDate(std::string date);
		bool validateValue(float value);
		void convertValue(std::string key, float value);
	public:
		BitCoinExchange();
		BitCoinExchange(std::string fileIn);
		~BitCoinExchange();
		BitCoinExchange(BitCoinExchange const &rhs);
		BitCoinExchange& operator=(const BitCoinExchange& rhs);
		void getMapData(std::string dataFile);
		void fileValidator();
		class BtcException : public std::exception
		{
            private:
				std::string msg;
            public:
            	BtcException(const std::string& msg) : msg(msg){}
				virtual ~BtcException() throw(){}
				virtual const char* what() const throw()
				{
					return msg.c_str();
				}
        };
};


#endif