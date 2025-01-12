#include "WeaponAttack.h"

#include <iostream>

WeaponAttack::WeaponAttack() {
	
	std::cout << "Constructing a WeaponAttack" << std::endl;
	
	_weaponTypes.push_back("Sword");
	_weaponTypes.push_back("Hammer");
	_weaponTypes.push_back("Axe");
	
}

WeaponAttack::~WeaponAttack() {
	
	std::cout << "Destructing a WeaponAttack" << std::endl;
	
	_weaponTypes.clear();
	
}

bool WeaponAttack::equipWeapon(std::string wType) { 
	
	for(int i = 0; i < _weaponTypes.size(); i++) {
		
		if(_weaponTypes[i] == wType) {
			std::cout << "Equiping " 
								<< _weaponTypes[i]
								<< " weapon"
								<< std::endl;
			
			return true;

		};
		
	};
	
	std::cout << "Unknow weapon type given to WeaponAttack::equipWeapon()" << std::endl;
	
	return false; 

};

void WeaponAttack::attack() {
	
	std::cout << "Call to undefined interface WeaponAttack::attack()" << std::endl;
	
};