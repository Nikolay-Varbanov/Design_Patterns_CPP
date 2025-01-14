#include <iostream>

#include "AnimationPhaseIdle.h"


AnimationPhaseIdle::AnimationPhaseIdle(Animator * animator) { 

	std::cout << "Constrcuting an AnimationPhaseIdle" << std::endl;
	
	_animator = animator;

};

AnimationPhaseIdle::~AnimationPhaseIdle() { 

	std::cout << "Destructiong an AnimationPhaseIdle" << std::endl;

};

void AnimationPhaseIdle::OnLoop() { 

	std::cout << "In AnimationPhaseIdle::OnLoop()" << std::endl;
	
	OnRender();
	
	OnEvent();
	
	if(_event == 'j') {
	
		std::cout << "In AnimationPhaseIdle::OnLoop() jump attempted" << std::endl;
		Animation * _tempAnimation = new AnimationPhaseIdle(_animator);
		_animator -> changeAnimation( _tempAnimation );
	}

};

void AnimationPhaseIdle::OnEvent() { 

	std::cout << "In AnimationPhaseIdle::OnEvent()" << std::endl;
	
	std::cin >> _event;

};

void AnimationPhaseIdle::OnRender() { 

	std::cout << "Press 'j' to jump" << std::endl;

};