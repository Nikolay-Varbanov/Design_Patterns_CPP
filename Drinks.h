#ifndef _DRINKS_H
#define _DRINKS_H

#include <iostream>

class Drinks {
	public: // Constructs
		Drinks() { std::cout << "Constructing a Drinks" << std::endl; };
		virtual ~Drinks() { std::cout << "Destructing a Drinks" << std::endl; };
	public: // Utilities
		virtual void OnRender() = 0;
};

#endif