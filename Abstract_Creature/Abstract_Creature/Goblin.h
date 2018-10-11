#pragma once
#ifndef GOBLIN_H
#define GOBLIN_H
#include "Creature.h"

class Goblin : public Creature
{
public:
	Goblin(int health = 100);
	virtual void Greet() const;
};

#endif // !GOBLIN_H
