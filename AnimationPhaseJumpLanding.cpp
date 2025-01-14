#include <iostream>

#include "AnimationPhaseJumpLanding.h"

#include "AnimationPhaseIdle.h"

#include "AnimationPhaseJumpLandingAttack.h"


AnimationPhaseJumpLanding::AnimationPhaseJumpLanding(Animator * animator) {
	
	std::cout << "Constrcuting an AnimationPhaseJumpLanding" << std::endl;
	
	_animator = animator;
	
};

AnimationPhaseJumpLanding::~AnimationPhaseJumpLanding() {
	
	std::cout << "Destructiong an AnimationPhaseJumpLanding" << std::endl;
	
};

void AnimationPhaseJumpLanding::OnLoop() {
	
	std::cout << "In AnimationPhaseJumpLanding::OnLoop()" << std::endl;
	
	OnRender();
	
	OnEvent();
	
	if(_event == 'a') {
		
		std::cout << std::endl
							<< "+++Attacking+++" 
							<< std::endl
							<< std::endl;
							
		Animation * _tempAnimation = new AnimationPhaseJumpLandingAttack(_animator);
		_animator -> changeAnimation( _tempAnimation );
	}	else {
		
		std::cout << std::endl
							<< "+++Idling+++" 
							<< std::endl
							<< std::endl;
		
		Animation * _tempAnimation = new AnimationPhaseIdle(_animator);
		_animator -> changeAnimation( _tempAnimation );		
	}
};

void AnimationPhaseJumpLanding::OnEvent() {
	
	std::cin >> _event;
	
};

void AnimationPhaseJumpLanding::OnRender() {
	
	std::cout << std::endl
						<< "**You can press 'a' to attack while landing***" 
						<< std::endl
						<< std::endl;
	
};