#include "RPN.hpp"

static int rpn(std::string line)
{
	Rpn rpn(line);

	if (!rpn.createStack())
		std::cout << "Invalid argument" << std::endl;
	else
		rpn.mathTime();

	return 0;

}

int main (int argc, char *argv[])
{
	if (argc == 2)
		rpn(argv[1]);
	else
		std::cout << "Invalid argument" << std::endl;
}