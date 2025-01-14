#include <iostream>

#include "AnimationPhaseJumpPeak.h"

#include "AnimationPhaseJumpDouble.h"

#include "AnimationPhaseJumpLanding.h"

AnimationPhaseJumpPeak::AnimationPhaseJumpPeak(Animator * animator) {
	
	std::cout << "Constrcuting an AnimationPhaseJumpPeak" << std::endl;
	
	_animator = animator;
	
};

AnimationPhaseJumpPeak::~AnimationPhaseJumpPeak() {
	
	std::cout << "Destructiong an AnimationPhaseJumpPeak" << std::endl;
	
};

void AnimationPhaseJumpPeak::OnLoop() {
	
	std::cout << "In AnimationPhaseJumpPeak::OnLoop()" << std::endl;
	
	OnRender();

	OnEvent();
	
	Animation * _tempAnimation;
	
	if(_event == 'j') {
		
		std::cout << std::endl
							<< "+++Double Jumping+++" 
							<< std::endl
							<< std::endl;
							
		_tempAnimation = new AnimationPhaseJumpDouble(_animator);
		_animator -> changeAnimation( _tempAnimation );
	} else {
		
		std::cout << std::endl
							<< "+++Landing+++" 
							<< std::endl
							<< std::endl;
							
		_tempAnimation = new AnimationPhaseJumpLanding(_animator);
		_animator -> changeAnimation( _tempAnimation );
	}
	
};

void AnimationPhaseJumpPeak::OnEvent() {
	
	std::cin >> _event;
	
};

void AnimationPhaseJumpPeak::OnRender() {
	
	std::cout << std::endl
						<< "***You can press 'j' for a double jump***" 
						<< std::endl
						<< std::endl;
	
};