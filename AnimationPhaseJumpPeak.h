#ifndef _ANIMATION_PHASE_JUMP_PEAK_H
#define _ANIMATION_PHASE_JUMP_PEAK_H

#include "Animation.h"

#include "Animator.h"

class AnimationPhaseJumpPeak : public Animation {
	public: // Constructs
		AnimationPhaseJumpPeak(Animator *);
		~AnimationPhaseJumpPeak();
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