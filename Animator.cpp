#include <iostream>

#include "Animator.h"

#include "AnimationPhaseIdle.h"

Animator::Animator() {
	
	std::cout << "Constructing an Animator" << std::endl;
	
	_currentAnimation = new AnimationPhaseIdle();
	
};

Animator::~Animator() {
	
	std::cout << "Destructing an Animator" << std::endl;
	
};

void Animator::OnLoop() {
	
	_currentAnimation -> OnLoop();
	
};