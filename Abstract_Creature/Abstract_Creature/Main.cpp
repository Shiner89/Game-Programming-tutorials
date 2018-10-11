#include "Creature.h"
#include "Orc.h"
#include "Goblin.h"

int main()
{
	Creature* oCreature = new Orc();
	oCreature->Greet();
	oCreature->DisplayHealth();
	cout << "\n\n\n";

	Creature* gCreature = new Goblin();
	gCreature->Greet();
	gCreature->DisplayHealth();

	cin.get();
	return 0;
}
