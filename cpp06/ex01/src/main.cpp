#include <iostream>
#include "Data.hpp"

int main(void)
{
	std::string name = "Raoni";
	int age = 35;

	Data *data;
	Data *newData;
	uintptr_t ratBit;

	data = new Data(name, age);
	ratBit = data->serialize(data);
	std::cout << "serialized data:" << std::endl;
	std::cout << ratBit << "\n" << std::endl;

	newData = data->deserialize(ratBit);
	if (newData->getName() == name && newData->getAge() == age){
		std::cout << "deserialized data:" << std::endl;
		std::cout << newData->getName() << "\n" << newData->getAge() << std::endl;
	}
	delete data;
}