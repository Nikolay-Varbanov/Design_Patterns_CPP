#ifndef _SWORD_WEAPON_H
#define _SWORD_WEAPON_H

#include <iostream>

#include "Weapon.h"

class SwordWeapon : public Weapon {
	public: // Constructs
		SwordWeapon() { std::cout << "Constructing a SwordWeapon" << std::endl; };
		~SwordWeapon() { std::cout << "Destructing a SwordWeapon" << std::endl; };
	public: // Utilities
		void attack() { std::cout << "You are attacked by a Sword. You are bleeding now!" << std::endl; };
};

#endif