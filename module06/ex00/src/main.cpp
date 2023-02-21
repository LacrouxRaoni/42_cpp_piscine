#include "Converter.hpp"

void tests(void);

int main(int argc, char *argv[])
{
	if (argv[1] != NULL && std::string(argv[1]) == "-t")
		tests();
	else if (argc == 2){
		Converter cnv(argv[1]);
		cnv.converterChecker();
	}
	else
		std::cout << "Invalid argument" << std::endl;
}

void tests(void){

	std::cout << "Test 1: convert char: " << std::endl;
	Converter test1("r");
	test1.converterChecker();
	
	std::cout << "\nTest 2: convert int: " << std::endl;
	Converter test2("0");
	test2.converterChecker();

	std::cout << "\nTest 3: convert float: " << std::endl;
	Converter test3("42.0f");
	test3.converterChecker();

	std::cout << "\nTest 4: convert double: " << std::endl;
	Converter test4("42.0");
	test4.converterChecker();

	std::cout << "\nTest 5: convert nan: " << std::endl;
	Converter test5("nan");
	test5.converterChecker();

	std::cout << "\nTest 6: convert nanf: " << std::endl;
	Converter test6("nanf");
	test6.converterChecker();

	std::cout << "\nTest 7: convert +inf: " << std::endl;
	Converter test7("+inf");
	test7.converterChecker();

	std::cout << "\nTest 8: convert +inff: " << std::endl;
	Converter test8("+inff");
	test8.converterChecker();

	std::cout << "\nTest 9: convert -inf: " << std::endl;
	Converter test9("-inf");
	test9.converterChecker();

	std::cout << "\nTest 10: convert -inff: " << std::endl;
	Converter test10("-inff");
	test10.converterChecker();
}
