#pragma once
#ifndef BOSS_H
#define BOSS_H
#include "Enemy.h"

class Boss : public Enemy
{
public:
	Boss(int damage = 30);
	void virtual Taunt() const;      //optional use of keyword virtual
	void virtual Attack() const;     //optional use of keyword virtual
};


#endif // !1


