#include "Creature.h"
#include "Orc.h"
#include "Goblin.h"
#include "OrcBoss.h"
#include "Troll.h"
#include <vector>

int main()
{
	//creating a vector and loop to read through the list
	vector<Creature*> vpCreatures;

	
	Creature* Goblin1 = new Goblin();
	Creature* Orc1 = new Orc();
	Creature* Orc2 = new Orc();
	Creature* OrcBoss1 = new OrcBoss();
	Creature* Troll1 = new Troll();
	Creature* Troll2 = new Troll(500,5);


	vpCreatures.push_back(Goblin1);
	vpCreatures.push_back(Orc1);
	vpCreatures.push_back(Orc2);
	vpCreatures.push_back(OrcBoss1);
	vpCreatures.push_back(Troll1);
	vpCreatures.push_back(Troll2);

	// this creates the iterator
	vector<Creature*>::const_iterator iter;

	for (iter = vpCreatures.begin(); iter != vpCreatures.end(); iter++)
	{
		(*iter)->Greet();
		(*iter)->DisplayHealth();
		(*iter)->DisplaySpeed();
	}

	
	// each where created and called out one at a time
	/* the orig entry in this file
	Creature* oCreature = new Orc();
	oCreature->Greet();
	oCreature->DisplayHealth();
	oCreature->DisplaySpeed();
	cout << "\n\n\n";

	Creature* gCreature = new Goblin();
	gCreature->Greet();
	gCreature->DisplayHealth();
	gCreature->DisplaySpeed();
	cout << "\n\n\n";

	Creature* obCreature = new OrcBoss();
	obCreature->Greet();
	obCreature->DisplayHealth();
	obCreature->DisplaySpeed();
	cout << "\n\n\n";

	Creature* tCreature = new Troll();
	tCreature->Greet();
	tCreature->DisplayHealth();
	tCreature->DisplaySpeed();
	cout << "\n\n\n";
	*/

	cin.get();
	return 0;
}
