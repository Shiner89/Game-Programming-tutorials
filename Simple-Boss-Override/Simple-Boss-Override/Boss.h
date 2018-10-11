#pragma once
#ifndef BOSS_H
#define BOSS_H
#include "Enemy.h"

class Boss : public Enemy
{
public:
	int m_DamageMultiplier;

	Boss();
	void SpecialAttack() const;

};



#endif // !1


