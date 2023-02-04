#include "iter.hpp"

void printMsg(std::string msg)
{
	std::cout << msg << std::endl;
}

int main(void)
{
	printMsg("Test Char Array");
	char arrCh[3] = {'a', 'b', 'c'};
	size_t size = 3;
	printMsg("Before Sum:");
	iter(arrCh, size, printElement);
	iter(arrCh, size, sumElement);
	printMsg("After Sum:");
	iter(arrCh, size, printElement);
	printMsg("");

	printMsg("Test String Array");
	std::string arrStr[3] = {"Name 1", "Name 2", "Name 3"};
	size = arrStr->size() - 2;
	iter(arrStr, size -1 , printElement);
	iter(arrStr, size -1 , sumElement);
	printMsg("");

	printMsg("Test Int Array");
	int arrInt[5] = {1, 2, 3, 4, 5};
	size = 5;
	printMsg("Before Sum:");
	iter(arrInt, size, printElement);
	iter(arrInt, size, sumElement);
	printMsg("After Sum:");
	iter(arrInt, size, printElement);
	printMsg("");

	printMsg("Test Float Array");
	float arrFloat[5] = {0.1f, 2.2f, 23.0f, 42.0f, 0.5f};
	size = 5;
	printMsg("Before Sum:");
	iter(arrFloat, size, printElement);
	iter(arrFloat, size, sumElement);
	printMsg("After Sum:");
	iter(arrFloat, size, printElement);
	printMsg("");
}
