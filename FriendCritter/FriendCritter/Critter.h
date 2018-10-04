#pragma once
#ifndef CRITTER_H
#define CRITTER_H

#include <iostream>
#include <string>

using namespace std;

class Critter
{
	//make following global functions friends of the Critter class
	friend void Peek(const Critter& aCritter);
	friend ostream& operator<<(ostream& os, const Critter& aCritter);

public:
	Critter(const string& name = "");

private:
	string m_Name;
};





#endif // !1
