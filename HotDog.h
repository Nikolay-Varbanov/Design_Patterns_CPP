#ifndef _HOTDOG_H
#define _HOTDOG_H

#include <iostream>

#include "MainMeal.h"

class HotDog : public MainMeal{
	public: // Constructs
		HotDog() { std::cout << "Constructing a Hot Dog" << std::endl; };
		~HotDog() { std::cout << "Destructing a Hot Dog" << std::endl; };
	public: // Utilities
		void OnRender() { std::cout << "A Hot Dog" << std::endl; };
};

#endif