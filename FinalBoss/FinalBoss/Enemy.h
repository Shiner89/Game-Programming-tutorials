#pragma once
#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
using namespace std;

class Enemy
{
public:
	Enemy();
	void Attack() const;

protected:
	int m_Damage;
};
#endif // !ENEMY_H
