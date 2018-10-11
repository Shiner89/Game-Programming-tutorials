#include "Boss.h"


Boss::Boss(int multiplier)
{
	m_pMultiplier = new int(multiplier);
}

Boss::~Boss()
{
	cout << "In Boss destructor, deleting m_pMultiplier.\n";
	delete m_pMultiplier;
	cout << "This is called first as it is the Boss class. \n";
	m_pMultiplier = 0;
}

void Boss::Attack() const
{
	cout << "A boss attacks and inflicts " << (*m_pDamage) * (*m_pMultiplier)
		<< " damage points.";
}
