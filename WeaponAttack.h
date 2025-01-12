#ifndef _WEAPON_ATTACK_H
#define _WEAPON_ATTACK_H

#include <string>
#include <vector>

class WeaponAttack {
	public: // Constructs
		WeaponAttack();
		~WeaponAttack();
	private: // Facilities
		std::vector<std::string> _weaponTypes;
	public: // Facilities
		bool equipWeapon(std::string wType);
		void attack();
};

#endif