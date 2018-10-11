#include "Enemy.h"

Enemy::Enemy(int damage)
{
	cout << "Enemy constructor called\n";
	m_pDamage = new int(damage);
}

Enemy::~Enemy()
{
	cout << "In Enemy destructor, deleting m_pDamage.\n";
	delete m_pDamage;
	cout << "This is called 2nd if the object is of class boss. \n Else this is called 1st";
	m_pDamage = 0;
}

void Enemy::Attack() const
{
	cout << "An enemy attacks and inflicts " << *m_pDamage << " damage points.";
}
