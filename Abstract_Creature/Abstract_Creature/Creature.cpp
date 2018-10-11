#include "Creature.h"

Creature::Creature(int health,int speed) :
	m_Health(health),
	m_Speed(speed)
{}

void Creature::DisplayHealth() const
{
	cout << "Health: " << m_Health << endl;
}

void Creature::DisplaySpeed() const
{
	cout << "Speed: " << m_Speed << endl;
}