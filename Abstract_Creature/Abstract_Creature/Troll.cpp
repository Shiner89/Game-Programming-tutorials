#include "Troll.h"

Troll::Troll(int health,int speed) :
	Creature(health,speed)
{}

void Troll::Greet() const
{
	cout << "The Troll bellows hello.\n";
}