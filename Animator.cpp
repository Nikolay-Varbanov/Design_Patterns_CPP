#include <iostream>

#include "Animator.h"

#include "AnimationPhaseIdle.h"

Animator::Animator() {
	
	std::cout << "Constructing an Animator" << std::endl;
	
	_currentAnimation = new AnimationPhaseIdle(this);
	
};

Animator::~Animator() {
	
	std::cout << "Destructing an Animator" << std::endl;
	
	delete _currentAnimation;
	
};

void Animator::OnLoop() {
	
	_currentAnimation -> OnLoop();
	
};

void Animator::changeAnimation(Animation *& new_animation) {
	
	std::cout << "A call made to Animator::changeAnimation(...)" << std::endl;
	
	if(new_animation) {
		std::cout << "A new animation given to Animator::changeAnimation(...)" << std::endl;
		delete _currentAnimation;
		_currentAnimation = new_animation;
	}
	
};