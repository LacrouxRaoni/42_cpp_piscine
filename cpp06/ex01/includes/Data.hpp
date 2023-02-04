#ifndef DATA_HPP
#define DATA_HPP

#include <stdint.h>
#include <iostream>

class Data
{
	private:
		std::string name;
		int			age;
	public:
		Data();
		Data(std::string name, int age);
		Data(const Data& data);
		~Data();
		Data& operator=(Data const& data);
		std::string getName();
		int getAge();
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
};

#endif