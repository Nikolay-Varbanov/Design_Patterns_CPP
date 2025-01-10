#ifndef _CONCRETE_PRODUCT_B_1_H
#define _CONCRETE_PRODUCT_B_1_H

#include <iostream>

#include "Product.h"

class ConcreteProductB1 : public Product {
	public: // Constructs
		ConcreteProductB1() {
			std::cout << "Constructing ConcreteProductB1" << std::endl;
		}
		~ConcreteProductB1() {
			std::cout << "Deconstructing ConcreteProductB1" << std::endl;
		}
	public: // Utilities
		void OnRender() {
			std::cout << "ConcreteProductB1" << std::endl;
		};
	
};

#endif