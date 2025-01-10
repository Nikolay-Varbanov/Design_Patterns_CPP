#ifndef _CONCRETE_PRODUCT_A_H
#define _CONCRETE_PRODUCT_A_H

#include <iostream>

#include "Product.h"

class ConcreteProductA : public Product {
	public:
		void OnRender() {
			std::cout << "ConcreteProductA" << std::endl;
		};
	
};

#endif