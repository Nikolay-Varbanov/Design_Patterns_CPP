#ifndef _ANIMATION_H
#define _ANIMATION_H

#include <iostream>

class Animation {
	public: // Constructs
		Animation() { std::cout << "Constrcuting Animation" << std::endl; };
		virtual ~Animation() { std::cout << "Destrcting Animation" << std::endl; };
	public: // Utilities
		virtual void OnLoop() = 0;
};

#endif