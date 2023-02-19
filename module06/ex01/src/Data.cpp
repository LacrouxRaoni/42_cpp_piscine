#include "Data.hpp"

Data::Data() : name(), age()
{
}

Data::Data(std::string name, int age) : name(name), age(age)
{

}

Data::Data(const Data& data)
{
	*this = data;
}

Data::~Data(){
}

Data& Data::operator=(Data const& data)
{
	if (this != &data)
	{
		this->name = data.name;
		this->age = data.age;
	}
	return *this;
}

std::string Data::getName()
{
	return this->name;
}

int Data::getAge()
{
	return this->age;
}


uintptr_t Data::serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Data::deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}
