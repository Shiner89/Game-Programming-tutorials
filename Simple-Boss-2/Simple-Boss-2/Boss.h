#pragma once
#ifndef BOSS_H
#define BOSS_H
#include "Enemy.h"

class Boss : public Enemy
{
public:
	Boss();
	void SpecialAttack() const;

private:
	int m_DamageMultiplier;
};

#endif // !BOSS_H
