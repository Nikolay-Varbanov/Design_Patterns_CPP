#include <iostream>

#include "AnimationPhaseJumpLanding.h"

#include "AnimationPhaseIdle.h"


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
	
	Animation * _tempAnimation = new AnimationPhaseIdle(_animator);
	_animator -> changeAnimation( _tempAnimation );
	
};

void AnimationPhaseJumpLanding::OnEvent() {
	
	
	
};

void AnimationPhaseJumpLanding::OnRender() {
	
	std::cout << "AnimationPhaseJumpLanding" << std::endl;
	
};