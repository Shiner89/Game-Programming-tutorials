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

Boss::Boss() :
	m_DamageMultiplier(3)
{}


#endif // !1


