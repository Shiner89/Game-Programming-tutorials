#include "Boss.h"

Boss::Boss(int damage) :
	Enemy(damage)            //call base class constructor with argument
{}

void Boss::Taunt() const     //override base class member function
{
	cout << "The boss says he will end your pitiful existence.\n";
}

void Boss::Attack() const    //override base class member function
{
	Enemy::Attack();         //call base class member function 
	cout << " And laughs heartily at you.\n";
}