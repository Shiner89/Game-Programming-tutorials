#include "Enemy.h"
#include "Boss.h"

int main()
{
	cout << "Calling Attack() on Boss object through pointer to Enemy:\n";
	//this means that it is an enemy but calls the boss function instead of a enemy one
	Enemy* pBadGuy = new Boss();
	pBadGuy->Attack();

	cout << "\n\nDeleting pointer to Enemy:\n";
	delete pBadGuy;
	pBadGuy = 0;
	//cout << "pBadGuy memloc is now: " << pBadGuy;

	cout << "\n\n\n";

	//this is when the enemy is called using its own functions and not that of the boss
	cout << "\nCreating a regular enemy\n";
	Enemy* eBadGuy = new Enemy;
	eBadGuy->Attack();

	cout << "\n\nDeleting pointer to Enemy:\n";
	delete eBadGuy;
	pBadGuy = 0;


	cin.get();

	return 0;
}
