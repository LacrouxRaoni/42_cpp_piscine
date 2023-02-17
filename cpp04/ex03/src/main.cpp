#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(void){
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}

		std::cout << "***Amateria tests***" << std::endl;
		AMateria *m1 = new Ice();
		AMateria *m2 = new Cure();

		std::cout << "Materia1: " << m1->getType() << std::endl;
		std::cout << "Materia2: " << m2->getType() << std::endl;

		AMateria *m3 = m1->clone();
		AMateria *m4 = m2->clone();
		std::cout << "Materia3 cloned: " << m3->getType() << std::endl;
		std::cout << "Materia4 cloned: " << m4->getType() << std::endl;

		AMateria* m5 = new Cure();
		AMateria* m6 = new Ice();
		std::cout << "Materia5 cloned: " << m5->getType() << std::endl;
		std::cout << "Materia5 cloned: " << m6->getType() << std::endl;
		std::cout << std::endl;

		std::cout << "***Materia Sources tests***" << std::endl;

		AMateria *tmp_cure1;
		AMateria *tmp_cure2;
		AMateria *tmp_ice1;
		AMateria *tmp_ice2;
		AMateria *tmp_ice3;

		IMateriaSource *ms_tmp = new MateriaSource();
		ms_tmp->learnMateria(m3);
		ms_tmp->learnMateria(m4);
		ms_tmp->learnMateria(m5);
		ms_tmp->learnMateria(m6);
		ms_tmp->learnMateria(new Cure());

		//test invalid materia
		tmp_cure1 = ms_tmp->createMateria("Batata");
		if (!tmp_cure1)
			std::cout << "no materia" << std::endl;
		tmp_cure1 = ms_tmp->createMateria("cure");
		tmp_cure2 = ms_tmp->createMateria("cure");
		tmp_ice1 = ms_tmp->createMateria("ice");
		tmp_ice2 = ms_tmp->createMateria("ice");
		tmp_ice3 = ms_tmp->createMateria("ice");

		std::cout << tmp_cure1->getType() << std::endl;
		std::cout << tmp_cure2->getType() << std::endl;
		std::cout << tmp_ice1->getType() << std::endl;
		std::cout << tmp_ice2->getType() << std::endl;
		std::cout << tmp_ice3->getType() << std::endl;
		std::cout << std::endl;


	std::cout << "***Player tests***" << std::endl;
	Character *p1 = new Character("Player1");
	ICharacter *p2 = new Character("Enemy");

	std::cout << "Player1 name: " << p1->getName() << std::endl;
	std::cout << "Player2 name: " << p2->getName() << std::endl;
	
	p1->equip(tmp_cure1);
	p1->equip(tmp_cure2);
	p1->equip(tmp_ice1);
	p1->equip(tmp_ice2);
	p1->equip(tmp_ice3);
	for (int i = 0; i < 4; i++){
		p1->use(i, *p2);
	}
	std::cout << "unequip slot 1: " << std::endl;
	p1->unequip(1);
	std::cout << "use empty slot: " << std::endl;
	p1->use(1, *p2);
	std::cout << "use filled slot: " << std::endl;
	p1->use(2, *p2);

	for (int i = 0; i < 4; i++){
		p1->unequip(i);
	}


	delete p2;
	delete p1;
	delete ms_tmp;
	delete m1;
	delete m2;

	return 0;
}