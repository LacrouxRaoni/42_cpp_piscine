#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>


template<typename T> 
class Array
{
	private:
		T *arr;
		unsigned int length;
	public:
		Array()  : arr(NULL), length(0)
		{
		}

		Array(unsigned int n)
		{
			this->arr = new T[n];
			length = n;
			for (unsigned int i = 0; i < length; i++){
				this->arr[i] = T();
			}
		}

		Array(const Array &array)
		{
			this->arr = NULL;
			*this = array;
		}

		~Array()
		{
			delete[] this->arr;
		}

		Array& operator=(Array const &array)
		{
			if (this != &array)
			{
				if (this->arr != NULL)
					delete[] this->arr;
				this->arr = new T[array.length];
				this->length = array.length;
				for (unsigned int i = 0; i < array.length; i++){
					this->arr[i] = array.arr[i];
				}
			}
			return *this;
		}

		T& operator[](int index)
		{
			if (index < 0 || static_cast<unsigned int>(index) >= this->length)
			{
				std::out_of_range e("Index out of bounds");
				throw e;
			}
			return arr[index];
		}

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