#pragma once
#ifndef TROLL_H
#define TROLL_H
#include "Creature.h"

class Troll : public Creature
{
public:
	Troll(int health = 200,int speed = 3);
	virtual void Greet() const;
};

#endif // !ORC_H
