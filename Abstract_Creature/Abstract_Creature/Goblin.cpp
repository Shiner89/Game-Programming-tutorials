#include "Goblin.h"

Goblin::Goblin(int health) :
	Creature(health)
{}

void Goblin::Greet() const
{
	cout << "The goblin snarls hello.\n";
}