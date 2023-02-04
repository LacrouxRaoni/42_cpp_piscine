#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void){
	AAnimal* animal1 = new Dog;
	AAnimal* animal2 = new Cat;

	AAnimal* animals[2] = {animal1, animal2 };
	animals[0]->makeSound();
	animals[1]->makeSound();
}