#include "Critter.h"
#include "Farm.h"

#include <iostream>
using namespace std;

Critter::Critter(const string& name) :
	m_Name(name)
{}

string Critter::GetName() const
{
	return m_Name;
}




