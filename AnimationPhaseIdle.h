#ifndef _ANIMATION_PHASE_IDLE_H
#define _ANIMATION_PHASE_IDLE_H

#include "Animation.h"

#include "Animator.h"

class AnimationPhaseIdle : public Animation {
	public: // Constructs
		AnimationPhaseIdle(Animator *);
		~AnimationPhaseIdle();
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