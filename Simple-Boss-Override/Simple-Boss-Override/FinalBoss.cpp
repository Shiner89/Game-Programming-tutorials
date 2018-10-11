#include "FinalBoss.h"

FinalBoss::FinalBoss(int damage) :
	Boss(damage)            //call base class constructor with argument
{}

void FinalBoss::Taunt() const     //override base class member function
{
	cout << "The boss says he will end your pitiful existence.\n";
	cout << "I burnt down your village.\n";
}

void FinalBoss::Attack() const    //override base class member function
{
	Boss::Attack();         //call base class member function 
	cout << "Final Boss executes Mega Attack.\n";
}