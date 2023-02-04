#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void){

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();


	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	j->makeSound();	//will output the dog sound!
	i->makeSound(); //will output the cat sound!
	meta->makeSound();

	const WrongAnimal* cow = new WrongCat();
	const WrongCat turtle;
	cow->wrongAnimalSound();
	turtle.wrongAnimalSound();





	WrongCat monkey = new WrongAnimal(turtle);
	monkey.wrongAnimalSound()


	delete meta;
	delete j;
	delete i;
	delete cow;
}