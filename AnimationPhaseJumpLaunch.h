#ifndef _ANIMATION_PHASE_JUMP_LAUNCH_H
#define _ANIMATION_PHASE_JUMP_LAUNCH_H

#include "Animation.h"

#include "Animator.h"

class AnimationPhaseJumpLaunch : public Animation {
	public: // Constructs
		AnimationPhaseJumpLaunch(Animator *);
		~AnimationPhaseJumpLaunch();
	private: // Facilities
		Animator * _animator;
		char _event;
	public: // Utilities
		void OnLoop();
	private: // Utilities
		void OnEvent();
		void OnRender();
};

#endif