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
		if (i < 50)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		animals[i]->makeSound();
	}
	for (int i = 0; i < 100; i++){
		delete animals[i];
	}


}