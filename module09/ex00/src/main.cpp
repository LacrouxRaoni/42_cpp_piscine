#include "BitcoinExchange.hpp"

void btc(std::string file)
{
	BitCoinExchange *btcEx = new BitCoinExchange(file);
	try 
	{
		btcEx->getMapData(CSVFILE);
		btcEx->fileValidator();
	} catch (BitCoinExchange::BtcException &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete btcEx;
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		btc(argv[1]);
	else
	 std::cout << "Error: could not open file." << std::endl;
}
