#ifndef _CONCRETE_FACTORY_2_H
#define _CONCRETE_FACTORY_2_H

#include <iostream>
#include <string.h> // for strcmp(...)

#include "AbstractFactory.h"

#include "ConcreteProductA2.h"
#include "ConcreteProductB2.h"

class ConcreteFactory2 : public AbstractFactory {
	public: // Constructs
		ConcreteFactory2() {
			std::cout << "Constructiong ConcreteFactory2" << std::endl;
		};
		~ConcreteFactory2() {
			std::cout << "Destructiong ConcreteFactory2" << std::endl;
		};
	public:
		Product *createProductA() {
			return new ConcreteProductA2();
		};
		Product *createProductB() {
			return new ConcreteProductB2();
		};
	
};

#endif