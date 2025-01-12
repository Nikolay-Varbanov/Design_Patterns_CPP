#ifndef _AXE_WEAPON_H
#define _AXE_WEAPON_H

#include <iostream>

#include "Weapon.h"

class AxeWeapon : public Weapon {
	public: // Constructs
		AxeWeapon() { std::cout << "Constructing an AxeWeapon" << std::endl; };
		~AxeWeapon() { std::cout << "Destructing an AxeWeapon" << std::endl; };
	public: // Utilities
		void attack() { std::cout << "You are attacked by an Axe. You are cleaved now!" << std::endl; };
};

#endif