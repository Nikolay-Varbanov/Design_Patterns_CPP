#ifndef _TOY_H
#define _TOY_H

#include <iostream>

class Toy {
	public: // Constructs
		Toy() { std::cout << "Constructing a Toy" << std::endl; };
		virtual ~Toy() { std::cout << "Destructing a Toy" << std::endl; };
	public: // Utilities
		virtual void OnRender() = 0;
};

#endif