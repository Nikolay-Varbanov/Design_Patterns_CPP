#include <iostream>

#include "WindowDecorator.h"

int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;
	
	WindowDecorator * w_decorator = new WindowDecorator();
	
	delete w_decorator;
	
}