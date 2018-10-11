#include "FinalBoss.h"

FinalBoss::FinalBoss() :
	m_DamageMultiplier(3)
{
	cout << "Final Boss consructer called\n";
}

void FinalBoss::SpecialAttack() const
{
	cout << "Special Attack inflicts " << (m_DamageMultiplier * m_Damage);
	cout << " damage points!\n";
}

void FinalBoss::MegaAttack() const
{
	cout << "Mega Attack inflicts " << (m_DamageMultiplier * (3*m_Damage));
	cout << " damage points!\n";
}