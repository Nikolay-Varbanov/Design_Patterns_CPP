#include <iostream>

#include "AnimationPhaseJumpLandingAttack.h"

#include "AnimationPhaseIdle.h"


AnimationPhaseJumpLandingAttack::AnimationPhaseJumpLandingAttack(Animator * animator) {
	
	std::cout << "Constrcuting an AnimationPhaseJumpLandingAttack" << std::endl;
	
	_animator = animator;
	
};

AnimationPhaseJumpLandingAttack::~AnimationPhaseJumpLandingAttack() {
	
	std::cout << "Destructiong an AnimationPhaseJumpLandingAttack" << std::endl;
	
};

void AnimationPhaseJumpLandingAttack::OnLoop() {
	
	std::cout << "In AnimationPhaseJumpLandingAttack::OnLoop()" << std::endl;
	
	OnRender();
	
	std::cout << std::endl
						<< "+++Idling+++" 
						<< std::endl
						<< std::endl;
	
	Animation * _tempAnimation = new AnimationPhaseIdle(_animator);
	_animator -> changeAnimation( _tempAnimation );
	
};

void AnimationPhaseJumpLandingAttack::OnEvent() {
	
	
	
};

void AnimationPhaseJumpLandingAttack::OnRender() {
	
	std::cout << std::endl
						<< "***AnimationPhaseJumpLandingAttack***" 
						<< std::endl
						<< std::endl;
	
};