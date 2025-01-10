#ifndef _CONCRETE_PRODUCT_A_1_H
#define _CONCRETE_PRODUCT_A_1_H

#include <iostream>

#include "Product.h"

class ConcreteProductA1 : public Product {
	public: // Constructs
		ConcreteProductA1() {
			std::cout << "Constructing ConcreteProductA1" << std::endl;
		}
		~ConcreteProductA1() {
			std::cout << "Deconstructing ConcreteProductA1" << std::endl;
		}
	public: // Utilities
		void OnRender() {
			std::cout << "ConcreteProductA1" << std::endl;
		};
	
};

#endif