#include "RPN.hpp"

static int rpn(std::string line)
{
	Rpn rpn(line);

	try {
		rpn.createStack();
	} catch (Rpn::RpnException &e){
		std::cout << e.what() << std::endl;
	}

	return 0;

}

int main (int argc, char *argv[])
{
	if (argc == 2)
		rpn(argv[1]);
	else
		std::cout << "Invalid argument" << std::endl;
}