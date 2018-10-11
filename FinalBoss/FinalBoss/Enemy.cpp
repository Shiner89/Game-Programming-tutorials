#include "Enemy.h"

Enemy::Enemy() :
	m_Damage(10)
{
	cout << "Enemy consructer called\n";
}

void Enemy::Attack() const
{
	cout << "Attack inflicts " << m_Damage << " damage points!\n";
}