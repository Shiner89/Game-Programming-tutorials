#include "Boss.h"
#include "Enemy.h"
#include "FinalBoss.h"


int main()
{
	cout << "Creating an enemy.\n";
	Enemy enemy1;
	enemy1.Attack();

	cout << "\nCreating a boss.\n";
	Boss boss1;
	boss1.Attack();
	boss1.SpecialAttack();

	cout << "\nCreating a  Final boss.\n";
	FinalBoss fboss1;
	fboss1.Attack();
	fboss1.SpecialAttack();
	fboss1.MegaAttack();


	cin.get();
	return 0;
}

