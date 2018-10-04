#include "Critter.h"
#include<iostream>
using namespace std;

void Peek(const Critter& aCritter);
ostream& operator<<(ostream& os, const Critter& aCritter);

int main()
{
	Critter crit("Poochie");

	cout << "Calling Peek() to access crit's private data member, m_Name: \n";
	Peek(crit);

	cout << "\nSending crit object to cout with the << operator:\n";
	cout << crit;
	cin.get();

	return 0;
}
//global friend function which can access all of a Critter object's members
void Peek(const Critter& aCritter)
{
	cout << aCritter.m_Name << endl;
}

//global friend function which can access all of Critter object's members
//overloads the << operator so you can send a Critter object to cout
ostream& operator<<(ostream& os, const Critter& aCritter)
{
	os << "Critter Object - ";
	os << "m_Name: " << aCritter.m_Name;
	return os;
}
