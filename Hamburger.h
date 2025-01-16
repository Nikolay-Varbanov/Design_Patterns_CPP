#ifndef _HAMBURGER_H
#define _HAMBURGER_H

#include <iostream>

#include "MainMeal.h"

class Hamburger : public MainMeal {
	public: // Constructs
		Hamburger() { std::cout << "Constructing a Hamburger" << std::endl; };
		~Hamburger() { std::cout << "Destructing a Hamburger" << std::endl; };
	public: // Utilities
		void OnRender() { std::cout << "A Hamburger" << std::endl; };
};

#endif