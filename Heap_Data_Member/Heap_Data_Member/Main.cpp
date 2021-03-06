#include "Critter.h"
#include <iostream>
using namespace std;

void testDestructor();
void testCopyConstructor(Critter aCopy);
void testAssignmentOp();

int main()
{
	testDestructor();
	cout << endl;

	Critter crit("Poochie", 5);
	crit.Greet();
	cout << "About to call a copy constructer \n";
	testCopyConstructor(crit);
	crit.Greet();
	cout << endl;

	testAssignmentOp();
	cin.get();
	return 0;
}

void testDestructor()
{
	Critter toDestroy("Rover", 3);
	toDestroy.Greet();
}

void testCopyConstructor(Critter aCopy)
{
	aCopy.Greet();
}

void testAssignmentOp()
{
	Critter crit1("crit1", 7);
	Critter crit2("crit2", 9);
	crit1 = crit2;
	crit1.Greet();
	crit2.Greet();
	cout << endl;

	Critter crit3("crit", 11);
	crit3 = crit3;
	crit3.Greet();
}

