#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void){
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;
	
	Animal* animals[100];
	for (int i = 0; i < 100; i++){
		std::cout << "Animal number " << i + 1 << ":" << std::endl;
		if (i < 50)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		animals[i]->makeSound();
		std::cout << std::endl;
	}
	for (int i = 0; i < 100; i++){
		std::cout << "Animal number " << i + 1 << ":" << std::endl;
		delete animals[i];
	}

	std::cout << "_______________________________________________" << std::endl;
	Dog basic;
	Dog temp = basic;
	std::cout << "_______________________________________________" << std::endl;

}

