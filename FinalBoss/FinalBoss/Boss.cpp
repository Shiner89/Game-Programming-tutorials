#include "Boss.h"

Boss::Boss() :
	m_DamageMultiplier(3)
	
{
	cout << "Boss consructer called\n";
}

void Boss::SpecialAttack() const
{
	cout << "Special Attack inflicts " << (m_DamageMultiplier * m_Damage);
	cout << " damage points!\n";
}