#include <iostream>

#include "WeaponAttack.h"

int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;
	
	WeaponAttack attacker;
	
	std::string weapon = "Sword";
	
	if( attacker.equipWeapon(weapon) == false )
		std::cout << "In client ewuipWaopon() Failed!!!" << std::endl;
	
	attacker.attack();
	
	weapon = "Hammer";

	if( attacker.equipWeapon(weapon) == false )
		std::cout << "In client ewuipWaopon() Failed!!!" << std::endl;
	
	attacker.attack();
	
	weapon = "Axe";

		if( attacker.equipWeapon(weapon) == false )
		std::cout << "In client ewuipWaopon() Failed!!!" << std::endl;
	
	attacker.attack();
	
	std::cout << "Done attacking" << std::endl;
	
}