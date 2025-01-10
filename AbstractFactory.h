#ifndef _ABSTRACT_FACTORY_H
#define _ABSTRACT_FACTORY_H

#include <iostream>

#include "Product.h"

class AbstractFactory { // Interface (pure abstact)
	public: // Constructions
		AbstractFactory() {
			std::cout << "Constructing AbstractFactory" << std::endl;
		};
		// Needs to be virtual so it can be know to call the subclass destructor
		virtual ~AbstractFactory() {
			std::cout << "Destructing AbstractFactory" << std::endl;
		};
	public: // Utilities
		//virtual Product *createProduct(char * which) = 0;
		virtual Product *createProductA() = 0;
		virtual Product *createProductB() = 0;
};

#endif