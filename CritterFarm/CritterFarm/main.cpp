#include "Critter.h"
#include "Farm.h"

#include <iostream>
using namespace std;

int main()
{
	Critter crit("Poochie");
	cout << "My critter's name is " << crit.GetName() << endl;

	cout << "\nCreating critter farm.\n";
	Farm myFarm(3);

	cout << "\nAdding three critters to the farm.\n";
	myFarm.Add(Critter("Moe"));
	myFarm.Add(Critter("Larry"));
	myFarm.Add(Critter("Curly"));

	cout << "\nCalling Roll...\n";
	myFarm.RollCall();
	cin.get();

	return 0;
}
