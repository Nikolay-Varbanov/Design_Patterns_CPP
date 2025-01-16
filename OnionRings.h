#ifndef _ONION_RINGS_H
#define _ONION_RINGS_H

#include <iostream>

#include "SideMeal.h"

class OnionRings : public SideMeal {
	public: // Constructs
		OnionRings() { std::cout << "Constructing a Onion Rings" << std::endl; };
		~OnionRings() { std::cout << "Destructing a Onion Rings" << std::endl; };
	public: // Utilities
		void OnRender() { std::cout << "A Onion Rings" << std::endl; };
};

#endif