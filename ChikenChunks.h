#ifndef _CHICKEN_CHUNKS_H
#define _CHICKEN_CHUNKS_H

#include <iostream>

#include "SideMeal.h"

class ChikenChunks : public SideMeal {
	public: // Constructs
		ChikenChunks() { std::cout << "Constructing a Chiken Chunks" << std::endl; };
		~ChikenChunks() { std::cout << "Destructing a Chiken Chunks" << std::endl; };
	public: // Utilities
		void OnRender() { std::cout << "A Chiken Chunks" << std::endl; };
};

#endif