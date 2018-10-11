#pragma once
#ifndef ORCBOSS_H
#define ORCBOSS_H
#include "Orc.h"
#include "Creature.h"

class OrcBoss : public Orc
{
public:
	OrcBoss(int health = 180,int speed = 9);
	virtual void Greet() const;
};


#endif // !ORCBOSS_H
