#ifndef _ANIMATION_PHASE_JUMP_DOUBLE_H
#define _ANIMATION_PHASE_JUMP_DOUBLE_H

#include "Animation.h"

#include "Animator.h"

class AnimationPhaseJumpDouble : public Animation {
	public: // Constructs
		AnimationPhaseJumpDouble(Animator *);
		~AnimationPhaseJumpDouble();
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