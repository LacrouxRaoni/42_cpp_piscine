#include <iostream>
#include <Array.hpp>

#define MAX_VAL 5
int main(void)
{
    Array<int> numbers(MAX_VAL);
    int* a = new int[MAX_VAL];
    srand(time(NULL));
  
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        a[i] = value;
    }

    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
	try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	numbers.print();
    delete [] a;//

    return 0;
}