#ifndef _CHEESE_BURGER_H
#define _CHEESE_BURGER_H

#include <iostream>

#include "MainMeal.h"

class CheeseBurger : public MainMeal {
	public: // Constructs
		CheeseBurger() { std::cout << "Constructing a Cheese Burger" << std::endl; };
		~CheeseBurger() { std::cout << "Destructing a Cheese Burger" << std::endl; };
	public: // Utilities
		void OnRender() { std::cout << "A Cheese Burger" << std::endl; };
};

#endif