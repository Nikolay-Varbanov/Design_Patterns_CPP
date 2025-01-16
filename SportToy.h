#ifndef _SPORT_TOY_H
#define _SPORT_TOY_H

#include <iostream>

#include "Toy.h"

class SportToy : public Toy {
	public: // Constructs
		SportToy() { std::cout << "Constructing a Sport Toy" << std::endl; };
		~SportToy() { std::cout << "Destructing a Sport Toy" << std::endl; };
	public: // Utilities
		void OnRender() { std::cout << "A Sport Toy" << std::endl; };
};

#endif