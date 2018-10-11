#include "Orc.h"

Orc::Orc(int health, int speed) :
	Creature(health,speed)
	
{}

void Orc::Greet() const
{
	cout << "The Orc grunts hello.\n";
}