#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

static void wrongAnimaltest()
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	const WrongCat *j = new WrongCat();

	meta->makesound();
	i->makesound();
	j->makeSound();

	delete meta;
	delete i;
	delete j;
}

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	j->makeSound();	//will output the dog sound!
	i->makeSound(); //will output the cat sound!
	meta->makeSound();


	delete meta;
	delete j;
	delete i;

	std::cout << "\n" << std::endl;
	wrongAnimaltest();
	std::cout << "\n" << std::endl;
}
