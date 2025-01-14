#include <iostream>

#include "AnimationPhaseJumpDouble.h"

#include "AnimationPhaseJumpLanding.h"


AnimationPhaseJumpDouble::AnimationPhaseJumpDouble(Animator * animator) {
	
	std::cout << "Constrcuting an AnimationPhaseJumpDouble" << std::endl;
	
	_animator = animator;
	
};

AnimationPhaseJumpDouble::~AnimationPhaseJumpDouble() {
	
	std::cout << "Destructiong an AnimationPhaseJumpDouble" << std::endl;
	
};

void AnimationPhaseJumpDouble::OnLoop() {
	
	std::cout << "In AnimationPhaseJumpDouble::OnLoop()" << std::endl;
	
	OnRender();
	
	Animation * _tempAnimation = new AnimationPhaseJumpLanding(_animator);
	_animator -> changeAnimation( _tempAnimation );
	
};

void AnimationPhaseJumpDouble::OnEvent() {
	
	
	
};

void AnimationPhaseJumpDouble::OnRender() {
	
	std::cout << "AnimationPhaseJumpDouble" << std::endl;
	
};