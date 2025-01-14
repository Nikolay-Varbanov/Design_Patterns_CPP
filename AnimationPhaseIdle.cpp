#include <iostream>

#include "AnimationPhaseIdle.h"

#include "AnimationPhaseJumpLaunch.h"


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
	
		std::cout << std::endl
							<< "+++Jumping+++" 
							<< std::endl
							<< std::endl;
							
		Animation * _tempAnimation = new AnimationPhaseJumpLaunch(_animator);
		_animator -> changeAnimation( _tempAnimation );
	}

};

void AnimationPhaseIdle::OnEvent() { 
	
	std::cin >> _event;

};

void AnimationPhaseIdle::OnRender() { 

	std::cout << "In AnimationPhaseIdle::OnRender()" << std::endl;

	std::cout << std::endl
						<< "***Press 'j' to jump***" 
						<< std::endl
						<< std::endl;

};