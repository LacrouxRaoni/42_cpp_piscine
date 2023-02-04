#include <iostream>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

Base *generate(void)
{
	srand(time(0));
	int n =	rand() % 3;
	switch (n)
	{
		case 0:
			return new A;
		case 1:
			return new B ;
		case 2:
			return new C ;
	}
	return NULL;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Object pointer type: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Object pointer type: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Object pointer type: C" << std::endl;
	else
		std::cout << "Invalid object pointer type" << std::endl;
}

void identify(Base& p)
{
	try {
		A &typeBase = dynamic_cast<A&>(p);
		std::cout << "Object reference type A" << std::endl;
		static_cast<void>(typeBase);
	} catch (const std::exception &e){}
	try {
		B &typeBase = dynamic_cast<B&>(p);
		std::cout << "Object reference type B" << std::endl;
		static_cast<void>(typeBase);
	} catch (const std::exception &e){}
	try {
		C &typeBase = dynamic_cast<C&>(p);
		std::cout << "Object reference type C" << std::endl;
		static_cast<void>(typeBase);
	} catch (const std::exception &e){}
}

int main(void)
{
	Base *base;

	base = generate();
	identify(base);
	identify(*base);

	delete base;
}