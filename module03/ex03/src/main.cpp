#include "DiamondTrap.hpp"

static void logChar(DiamondTrap &diamondTrap)
{
	std::cout << "\n===Character Status===" << std::endl;
	std::cout << "Name: " << diamondTrap.getName() << std::endl;
	std::cout << "Energy: " << diamondTrap.getEnergyPoint() << std::endl;
	std::cout << "Hit Point: " << diamondTrap.getHitPoint() << std::endl;
	std::cout << "Attack Damage: " << diamondTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;
}

int main(void){
	DiamondTrap diamondTrap("Diamond");
	logChar(diamondTrap);
	while (diamondTrap.getEnergyPoint() > 1)
		diamondTrap.attack("CL4P-TP");
	std::cout << std::endl;
	diamondTrap.takeDamage(19);
	diamondTrap.beRepaired(5);
	diamondTrap.whoAmI();
	logChar(diamondTrap);
	diamondTrap.beRepaired(5);
}