#ifndef _FRENCH_FRIES_H
#define _FRENCH_FRIES_H

#include <iostream>

#include "SideMeal.h"

class FrenchFries : public SideMeal {
	public: // Constructs
		FrenchFries() { std::cout << "Constructing a French Fries" << std::endl; };
		~FrenchFries() { std::cout << "Destructing a French Fries" << std::endl; };
	public: // Utilities
		void OnRender() { std::cout << "A French Fries" << std::endl; };
};

#endif