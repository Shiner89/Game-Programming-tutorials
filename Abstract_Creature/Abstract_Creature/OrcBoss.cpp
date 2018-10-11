#include "OrcBoss.h"
#include "Creature.h"

OrcBoss::OrcBoss(int health,int speed) :
	Orc(health,speed)
{}

void OrcBoss::Greet() const
{
	cout << "The Orc Boss growls hello.\n";
}