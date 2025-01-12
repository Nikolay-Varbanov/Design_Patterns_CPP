#include <iostream>

#include "WeaponAttack.h"

#include "SwordWeapon.h"
#include "HammerWeapon.h"

WeaponAttack::WeaponAttack() {
	
	std::cout << "Constructing a WeaponAttack" << std::endl;
	
	_weaponTypes.push_back("Sword");
	_weaponTypes.push_back("Hammer");
	_weaponTypes.push_back("Axe");
	
	_availableWeapons.reserve(3);
	
	_availableWeapons.push_back( new SwordWeapon() );
	_availableWeapons.push_back( new HammerWeapon() );
	
	_equippedWeapon = _availableWeapons[0];
	
}

WeaponAttack::~WeaponAttack() {
	
	std::cout << "Destructing a WeaponAttack" << std::endl;
	
	_weaponTypes.clear();
	
	delete _availableWeapons[0];
	delete _availableWeapons[1];
	
}

bool WeaponAttack::equipWeapon(std::string wType) { 
	
	for(int i = 0; i < _weaponTypes.size(); i++) {
		
		if(_weaponTypes[i] == wType) {
			std::cout << "Equiping " 
								<< _weaponTypes[i]
								<< " weapon"
								<< std::endl;
								
		if(i < _availableWeapons.size() ) {	
			_equippedWeapon = _availableWeapons[i];
			return true;
		} else {
			std::cout << "In context equipWeapon() Failed!!!" << std::endl;
			return false;
		}
	
		};
		
	};
	
	std::cout << "Unknow weapon type given to WeaponAttack::equipWeapon()" << std::endl;
	
	return false; 

};

void WeaponAttack::attack() {
	
	_equippedWeapon -> attack();
	
};