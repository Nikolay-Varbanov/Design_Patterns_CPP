#include <iostream>

#include "Animator.h"

Animator::Animator() {
	
	std::cout << "Constructing an Animator" << std::endl;
	
};

Animator::~Animator() {
	
	std::cout << "Destructing an Animator" << std::endl;
	
};

void Animator::OnLoop() {
	
	std::cout << "Entering Animator::OnLoop()" << std::endl;
	
};

void Animator::OnEvent() {
	
	std::cout << "" << std::endl;
	
};

void Animator::OnRender() {
	
	std::cout << "" << std::endl;
	
};