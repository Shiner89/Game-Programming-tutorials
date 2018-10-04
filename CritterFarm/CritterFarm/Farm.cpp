#include "Critter.h"
#include "Farm.h"

#include <iostream>
using namespace std;



Farm::Farm(int spaces)
{
	m_Critters.reserve(spaces);
}

void Farm::Add(const Critter& aCritter)
{
	m_Critters.push_back(aCritter);
}

void Farm::RollCall() const
{
	for (vector<Critter>::const_iterator iter = m_Critters.begin();iter != m_Critters.end();++iter)
	{
		cout << iter->GetName() << " here.\n";
	}
}