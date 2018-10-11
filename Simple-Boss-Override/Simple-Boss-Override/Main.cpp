#include "Enemy.h"
#include "Boss.h"
#include "FinalBoss.h"


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

	cout << "\n\nFinal Boss object:\n";
	FinalBoss fBoss;
	fBoss.Taunt();
	fBoss.Attack();

	cin.get();
	return 0;
}
