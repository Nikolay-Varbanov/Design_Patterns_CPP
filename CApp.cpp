#include <iostream>

#include "Animator.h"

int main() {

	std::cout << "Hey Im Working here!!!" << std::endl;
	
	Animator * animator = new Animator();
	
	char _event;
	
	do {
		
		std::cout << "CApp Looping" << std::endl;
		
		animator -> OnLoop();
		
		std::cout << std::endl
							<< "!!!You can press 'q' to exit the program!!!" 
							<< std::endl
							<< std::endl;
		
		std::cin >> _event;
		
	} while(_event != 'q');
	
	delete animator;
	
}