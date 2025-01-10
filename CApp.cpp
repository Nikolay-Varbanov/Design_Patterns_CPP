#include <iostream>

#include "Window.h"

#include "SimpleWindow.h"

int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;
	
	Window * simpleWindow = new SimpleWindow();
	
	simpleWindow -> draw();
	
	std::cout << simpleWindow->getDescription() << std::endl;
	
	delete simpleWindow;
	
}