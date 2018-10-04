#include "Critter.h"
#include "Farm.h"

#include <iostream>
using namespace std;

int main()
{
	Critter crit("Poochie");
	cout << "My critter's name is " << crit.GetName() << endl;

	cout << "\nCreating critter farm.\n";
	Farm myFarm(6);
	string name;

	cout << "\nAdding 6 critters to the farm.\n";
	myFarm.Add(Critter("Moe"));
	myFarm.Add(Critter("Larry"));
	myFarm.Add(Critter("Curly"));
	myFarm.Add(Critter("Ringo"));
	myFarm.Add(Critter("Paul"));
	cout << "Please enter final name for critter?\n";
	cin >> name;
	myFarm.Add(Critter(name));
	cin.get();


	cout << "\nCalling Roll...\n";
	myFarm.RollCall();
	cin.get();

	return 0;
}
