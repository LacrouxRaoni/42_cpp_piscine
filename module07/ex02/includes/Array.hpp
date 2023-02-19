#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>


template<typename T> 
class Array
{
	private:
		T *arr;
		int unsigned length;
	public:
		Array()  : arr(NULL), length(0)
		{
		}

		Array(unsigned int n)
		{
			this->arr = new T[n];
			length = n;
		}

		Array(const Array &array)
		{
			*this = array;
		}

		~Array()
		{
		}

		Array& operator=(Array const &array)
		{
			if (this != &array)
			{
				this->arr = array.arr;
				this->length = array.length;
			}
			return *this;
		}

		T& operator[](int index)
		{
			if (index < 0 || static_cast<unsigned int>(index) >= this->length)
				throw OutOfBoundsException();
			return arr[index];
		}

		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw(){
					return "Index out of bounds";
				}
		};


		unsigned int size() const
		{
			return this->length;
		}

		void print(){
			for (unsigned int i = 0; i < this->length; i++)
				std::cout << this->arr[i] << std::endl;
		}
};


#endif