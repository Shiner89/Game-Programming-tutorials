#pragma once
#ifndef CREATURE_h
#define CREATURE_H

#include <iostream>
using namespace std;

class Creature  //abstract class
{
public:
	Creature(int health = 100);
	virtual void Greet() const = 0;   //pure virtual member function
	virtual void DisplayHealth() const;

protected:
	int m_Health;
};


#endif // !CREATURE_h
