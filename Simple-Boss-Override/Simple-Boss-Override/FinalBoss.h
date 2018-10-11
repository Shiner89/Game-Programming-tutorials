#pragma once
#ifndef FINALBOSS_H
#define FINALBOSS_H
#include "Boss.h"

class FinalBoss : public Boss
{
public:
	FinalBoss(int damage = 300);
	void virtual Taunt() const;      //optional use of keyword virtual
	void virtual Attack() const;     //optional use of keyword virtual
};


#endif // !1


