#include "whatever.hpp"

void customTests()
{
	std::cout << "\n\n\n" << "CUSTOM TESTS\n" << std::endl;
	std::cout << "swap test 1: String" << std::endl;
	std::string e = "potato";
	std::string f = "bean";
	std::cout << "before swap: e = " << e << ", f = " << f << std::endl;
	swap(e, f);
	std::cout << "after swap: e = " << e << ", f = " << f << std::endl;
	std::cout << std::endl;

	std::cout << "swap test 2: Char" << std::endl;
	char g = 'a';
	char h = 'b';
	std::cout << "before swap: g = " << g << ", h = " << h << std::endl;
	swap(g, h);
	std::cout << "after swap: g = " << g << ", h = " << h << std::endl;
	std::cout << std::endl;

	std::cout << "swap test 3: Integer" << std::endl;
	int i = 123;
	int j = 321;
	std::cout << "before swap: i = " << i << ", j = " << j << std::endl;
	swap(i, j);
	std::cout << "before swap: i = " << i << ", j = " << j << std::endl;
	std::cout << std::endl;

	std::cout << "swap test 4: Float" << std::endl;
	float k = 1.42f;
	float l = 42.1f;
	std::cout << "before swap: k = " << k << ", l = " << l << std::endl;
	swap(k, l);
	std::cout << "before swap: k = " << k << ", l = " << l << std::endl;
	std::cout << std::endl;

	std::cout << "swap test 5: Double" << std::endl;
	double m = 42.42;
	double n = 11.11;
	std::cout << "before swap: m = " << m << ", n = " << n << std::endl;
	swap(m, n);
	std::cout << "before swap: m = " << m << ", n = " << n << std::endl;
	std::cout << std::endl;	

	std::cout << "min test 1: Char" << std::endl;	
	std::cout << min('a', 'z') << std::endl;

	std::cout << "min test 2: Char" << std::endl;
	std::cout << min('z', 'a') << std::endl;

	std::cout << "min test 1: Int" << std::endl;
	std::cout << min(1, 42) << std::endl;

	std::cout << "min test 2: Int" << std::endl;	
	std::cout << min(42, 52) << std::endl;

	std::cout << "min test 1: Float" << std::endl;
	std::cout << min(42.20f, 42.02f) << std::endl;

	std::cout << "min test 2: Float" << std::endl;	
	std::cout << min(42.02f, 42.20f) << std::endl;

	std::cout << "min test 1: Double" << std::endl;
	std::cout << min(0.02, 20.00) << std::endl;

	std::cout << "min test 2: Double" << std::endl;	
	std::cout << min(20.00, 02.02) << std::endl;

	std::cout << "max test 1: Char" << std::endl;	
	std::cout << max('a', 'z') << std::endl;

	std::cout << "max test 2: Char" << std::endl;
	std::cout << max('z', 'a') << std::endl;

	std::cout << "max test 1: Int" << std::endl;
	std::cout << max(1, 42) << std::endl;

	std::cout << "max test 2: Int" << std::endl;	
	std::cout << max(42, 52) << std::endl;

	std::cout << "max test 1: Float" << std::endl;
	std::cout << max(42.20f, 42.02f) << std::endl;

	std::cout << "max test 2: Float" << std::endl;	
	std::cout << max(42.02f, 42.20f) << std::endl;

	std::cout << "max test 1: Double" << std::endl;
	std::cout << max(0.02, 20.00) << std::endl;

	std::cout << "max test 2: Double" << std::endl;	
	std::cout << max(20.00, 02.02) << std::endl;
}

int main(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


	customTests();
}