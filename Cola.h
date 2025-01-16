#ifndef _COLA_H
#define _COLA_H

#include <iostream>

#include "Drinks.h"

class Cola : public Drinks {
	public: // Constructs
		Cola() { std::cout << "Constructing a Cola" << std::endl; };
		~Cola() { std::cout << "Destructing a Cola" << std::endl; };
	public: // Utilities
		void OnRender() { std::cout << "A Cola" << std::endl; };
};

#endif