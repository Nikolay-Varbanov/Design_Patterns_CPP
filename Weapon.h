#ifndef _WEAPON_H
#define _WEAPON_H

#include <iostream>

class Weapon {
	public: // Constrcuts
		Weapon() { std::cout << "Constructing a Weapon" << std::endl; };
		virtual ~Weapon() { std::cout << "Destructing a Weapon" << std::endl; };
	public: // Utilities
		void virtual attack() = 0;
};

#endif