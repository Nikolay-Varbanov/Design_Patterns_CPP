#ifndef _ANIMATION_PHASE_JUMP_LANDING_ATTACK_H
#define _ANIMATION_PHASE_JUMP_LANDING_ATTACK_H

#include "Animation.h"

#include "Animator.h"

class AnimationPhaseJumpLandingAttack : public Animation {
	public: // Constructs
		AnimationPhaseJumpLandingAttack(Animator *);
		~AnimationPhaseJumpLandingAttack();
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