#ifndef _FACTORY_METHOD_H
#define _FACTORY_METHOD_H

#include <iostream>

#include "Product.h"

class FactoryMethod { // Interface (pure abstact)
	public: // Constructions
		FactoryMethod() {
			std::cout << "Constructing FactoryMethod" << std::endl;
		};
		// Needs to be virtual so it can be know to call the subclass destructor
		virtual ~FactoryMethod() {
			std::cout << "Destructing FactoryMethod" << std::endl;
		};
	public: // Utilities
		virtual Product *createProduct(char * which) = 0;
};

#endif