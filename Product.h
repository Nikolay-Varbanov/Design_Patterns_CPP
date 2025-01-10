#ifndef _PRODUCT_H
#define _PRODUCT_H

#include <iostream>

class Product {
	public: // Constructs
		Product() {
			std::cout << "Constructing Product" << std::endl;
		}
		virtual ~Product() {
			std::cout << "Deconstructing Product" << std::endl;
		}
	public: // Utilities
		virtual void OnRender() = 0;
};

#endif