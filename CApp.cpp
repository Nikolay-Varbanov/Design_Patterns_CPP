#include <iostream>

#include "WeaponAttack.h"

int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;
	
	WeaponAttack attacker;
	
	std::string weapon = "Sword";
	
	attacker.equipWeapon(weapon);
	
	attacker.attack();
	
	weapon = "Hammer";

	attacker.equipWeapon(weapon);
	
	attacker.attack();
	
	weapon = "Axe";

	attacker.equipWeapon(weapon);
	
	attacker.attack();
	
}