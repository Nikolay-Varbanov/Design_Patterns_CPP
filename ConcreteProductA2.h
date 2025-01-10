#ifndef _CONCRETE_PRODUCT_A_2_H
#define _CONCRETE_PRODUCT_A_2_H

#include <iostream>

#include "Product.h"

class ConcreteProductA2 : public Product {
	public: // Constructs
		ConcreteProductA2() {
			std::cout << "Constructing ConcreteProductA2" << std::endl;
		}
		~ConcreteProductA2() {
			std::cout << "Deconstructing ConcreteProductA2" << std::endl;
		}
	public: // Utilities
		void OnRender() {
			std::cout << "ConcreteProductA2" << std::endl;
		};
	
};

#endif