#ifndef _CONCRETE_PRODUCT_B_2_H
#define _CONCRETE_PRODUCT_B_2_H

#include <iostream>

#include "Product.h"

class ConcreteProductB2 : public Product {
	public: // Constructs
		ConcreteProductB2() {
			std::cout << "Constructing ConcreteProductB2" << std::endl;
		}
		~ConcreteProductB2() {
			std::cout << "Deconstructing ConcreteProductB2" << std::endl;
		}
	public: // Utilities
		void OnRender() {
			std::cout << "ConcreteProductB2" << std::endl;
		};
	
};

#endif