#ifndef _FANTA_H
#define _FANTA_H

#include <iostream>

#include "Drinks.h"

class Fanta : public Drinks {
	public: // Constructs
		Fanta() { std::cout << "Constructing a Fanta" << std::endl; };
		~Fanta() { std::cout << "Destructing a Fanta" << std::endl; };
	public: // Utilities
		void OnRender() { std::cout << "A Fanta" << std::endl; };
};

#endif