#ifndef _ANIMATION_PHASE_JUMP_LANDING_H
#define _ANIMATION_PHASE_JUMP_LANDING_H

#include "Animation.h"

#include "Animator.h"

class AnimationPhaseJumpLanding : public Animation {
	public: // Constructs
		AnimationPhaseJumpLanding(Animator *);
		~AnimationPhaseJumpLanding();
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