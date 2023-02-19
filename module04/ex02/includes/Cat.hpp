#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const Cat& cat);
		~Cat();
		Cat& operator=(Cat const& cat);
		void makeSound();
		Brain& getBrain() const;
};

#endif