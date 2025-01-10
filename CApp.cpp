#include <iostream>

#include "VerticalScrollBarDecorator.h"

#include "HorizontalScrollBarDecorator.h"

#include "SimpleWindow.h"

int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;
	
	std::cout << std::endl << "Testing of Simple Window" << std::endl << std::endl;
	
	Window * simpleWindow = new SimpleWindow();
	
	simpleWindow -> draw();
	
	std::cout << simpleWindow->getDescription() << std::endl;
	
	delete simpleWindow;
	
	std::cout << std::endl << "Ending testing of Simple Window" << std::endl << std::endl;
	
	std::cout << std::endl << "Testing of Vertical Scroll Bar" << std::endl << std::endl;
	
	Window * verticalScrollBar = new VerticalScrollBarDecorator( new SimpleWindow() );
	
	std::cout << verticalScrollBar -> getDescription() << std::endl;
	
	verticalScrollBar -> draw();
	
	delete verticalScrollBar;
	
	std::cout << std::endl << "Ending testing of Vertical Scroll Bar" << std::endl << std::endl;
	
	std::cout << std::endl << "Testing of Horizontal Scroll Bar" << std::endl << std::endl;
	
	Window * horizontalScrollBar = new HorizontalScrollBarDecorator( new SimpleWindow() );
	
	std::cout << horizontalScrollBar -> getDescription() << std::endl;
	
	horizontalScrollBar -> draw();
	
	delete horizontalScrollBar;
	
	std::cout << std::endl << "Ending testing of Horizontal Scroll Bar" << std::endl << std::endl;
	
	std::cout << std::endl << "Testing of Decorated window" << std::endl << std::endl;
	
	Window * decoratedWindow = new HorizontalScrollBarDecorator( 
		new VerticalScrollBarDecorator(
			new SimpleWindow()
		)
	);
	
	std::cout << decoratedWindow -> getDescription() << std::endl;
	
	decoratedWindow -> draw();
	
	delete decoratedWindow;
	
	std::cout << std::endl << "Ending testing of Decorated window" << std::endl << std::endl;
	
	
}