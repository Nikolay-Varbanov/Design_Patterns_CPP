#ifndef _HAMMER_WEAPON_H
#define _HAMMER_WEAPON_H

#include <iostream>

#include "Weapon.h"

class HammerWeapon : public Weapon {
	public: // Constructs
		HammerWeapon() { std::cout << "Constructing a HammerWeapon" << std::endl; };
		~HammerWeapon() { std::cout << "Destructing a HammerWeapon" << std::endl; };
	public: // Utilities
		void attack() { std::cout << "You are attacked by a Hammer. You are stunned now!" << std::endl; };
};

#endif