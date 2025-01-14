#include <iostream>

#include "AnimationPhaseJumpLaunch.h"

#include "AnimationPhaseJumpPeak.h"


AnimationPhaseJumpLaunch::AnimationPhaseJumpLaunch(Animator * animator) {
	
	std::cout << "Constrcuting an AnimationPhaseJumpLaunch" << std::endl;
	
	_animator = animator;
	
};

AnimationPhaseJumpLaunch::~AnimationPhaseJumpLaunch() {
	
	std::cout << "Destructiong an AnimationPhaseJumpLaunch" << std::endl;
	
};

void AnimationPhaseJumpLaunch::OnLoop() {
	
	std::cout << "In AnimationPhaseJumpLaunch::OnLoop()" << std::endl;
	
	OnRender();

	std::cout << "In AnimationPhaseJumpLaunch::OnLoop() Landing" << std::endl;
	Animation * _tempAnimation = new AnimationPhaseJumpPeak(_animator);
	_animator -> changeAnimation( _tempAnimation );
	
};

void AnimationPhaseJumpLaunch::OnEvent() {
	
	
	
};

void AnimationPhaseJumpLaunch::OnRender() {
	
	std::cout << "AnimationPhaseJumpLaunch" << std::endl;
	
};