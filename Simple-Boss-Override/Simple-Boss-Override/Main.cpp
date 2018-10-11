#include "Enemy.h"
#include "Boss.h"


int main()
{
	cout << "Enemy object:\n";
	Enemy anEnemy;
	anEnemy.Taunt();
	anEnemy.Attack();

	cout << "\n\nBoss object:\n";
	Boss aBoss;
	aBoss.Taunt();
	aBoss.Attack();

	cin.get();
	return 0;
}
