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
	{
		std::cout << "\nDeep Copy test" << std::endl;
		std::cout << "_______________________________________________" << std::endl;
		Cat *cat = new Cat();
		Cat *deepCopyCat = new Cat(*cat);
		Dog *dog = new Dog();
		Dog *deepCopyDog = new Dog(*dog);

		std::cout << &cat << std::endl;
		std::cout << &deepCopyCat << std::endl;
		deepCopyDog->makeSound();
		delete cat;
		delete deepCopyCat;
		delete dog;
		delete deepCopyDog;
		std::cout << "end____________________________________________" << std::endl;
	}
	{	
		std::cout << "\nDeep Cat Copy test" << std::endl;
		std::cout << "_______________________________________________" << std::endl;
		Cat *basic = new Cat();
		Cat *temp = new Cat(*basic);
		basic->makeSound();
		temp->makeSound();
		std::cout << "end____________________________________________" << std::endl;
		delete basic;
		delete temp;
	}
	{
		std::cout << "\nDeep Dog Copy test" << std::endl;
		std::cout << "_______________________________________________" << std::endl;
		Dog basic;
		Dog temp = basic;
		basic.makeSound();
		temp.makeSound();
		std::cout << "end____________________________________________" << std::endl;
	}
	{
		Cat cat;
		Cat cat2(cat);

		Cat *tmp = &cat2;
		std::cout << tmp->getType() << std::endl;
	}
}	

