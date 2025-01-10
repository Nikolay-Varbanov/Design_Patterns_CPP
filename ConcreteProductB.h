#ifndef _CONCRETE_PRODUCT_B_H
#define _CONCRETE_PRODUCT_B_H

#include <iostream>

#include "Product.h"

class ConcreteProductB : public Product {
	public:
		void OnRender() {
			std::cout << "ConcreteProductB" << std::endl;
		};
	
};

#endif