#pragma once
#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
using namespace std;

class Enemy
{
public:
	Enemy(int damage = 10);
	void virtual Taunt() const;     //made virtual to be overridden
	void virtual Attack() const;    //made virtual to be overridden

private:
	int m_Damage;
};



#endif // !ENEMY_H

