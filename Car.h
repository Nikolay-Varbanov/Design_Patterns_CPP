#ifndef _CAR_H
#define _CAR_H

#include <iostream>

#include "Toy.h"

class Car : public Toy {
	public: // Constructs
		Car() { std::cout << "Constructing a Car" << std::endl; };
		~Car() { std::cout << "Destructing a Car" << std::endl; };
	public: // Utilities
		void OnRender() { std::cout << "A Car" << std::endl; };
};

#endif