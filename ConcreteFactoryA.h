#ifndef _CONCRETE_FACTORY_A_H
#define _CONCRETE_FACTORY_A_H

#include <iostream>
#include <string.h> // for strcmp(...)

#include "FactoryMethod.h"

#include "ConcreteProductA.h"
#include "ConcreteProductB.h"

class ConcreteFactoryA : public FactoryMethod {
	public: // Constructs
		ConcreteFactoryA() {
			std::cout << "Constructiong ConcreteFactoryA" << std::endl;
		};
		~ConcreteFactoryA() {
			std::cout << "Destructiong ConcreteFactoryA" << std::endl;
		};
	public:
		Product *createProduct(char * which) {
			
			if(strcmp(which,"ConcreteProductA") == 0) {
				return new ConcreteProductA();
			} else if(strcmp(which,"ConcreteProductB") == 0) {
				return new ConcreteProductB();
			}
			return NULL;
		};
	
};

#endif