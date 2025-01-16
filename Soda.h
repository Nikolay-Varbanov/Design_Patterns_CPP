#ifndef _SODA_H
#define _SODA_H

#include <iostream>

#include "Drinks.h"

class Soda : public Drinks {
	public: // Constructs
		Soda() { std::cout << "Constructing a Soda" << std::endl; };
		~Soda() { std::cout << "Destructing a Soda" << std::endl; };
	public: // Utilities
		void OnRender() { std::cout << "A Soda" << std::endl; };
};

#endif