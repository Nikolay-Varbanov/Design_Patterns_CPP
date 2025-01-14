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
		_tempAnimation = new AnimationPhaseJumpDouble(_animator);
		_animator -> changeAnimation( _tempAnimation );
	} else {
		_tempAnimation = new AnimationPhaseJumpLanding(_animator);
		_animator -> changeAnimation( _tempAnimation );
	}
	
};

void AnimationPhaseJumpPeak::OnEvent() {
	
	std::cin >> _event;
	
};

void AnimationPhaseJumpPeak::OnRender() {
	
	std::cout << "You can press 'j' for a double jump" << std::endl;
	
};