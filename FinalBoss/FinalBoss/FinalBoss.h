#pragma once
#ifndef FINALBOSS_H
#define FINALBOSS_H
#include "BOSS.h"

class FinalBoss : public Boss
{
public:
	FinalBoss();
	void SpecialAttack() const;
	void MegaAttack() const;

private:
	int m_DamageMultiplier;
};

#endif // !BOSS_H

