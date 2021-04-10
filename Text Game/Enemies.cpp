#include "enemy.h"



enemy::enemy()
{
}

enemy::enemy(int x, int y, int z, int c, int a, std::string name)
{
	dungeonEnemyHP = x;
	dungeonEnemyArmour = y;
	dungeonEnemyRes = c;
	dungeonEnemyAttack = z;
	dungeonEnemyType = a;
	dungeonEnemyName = name;
}

enemy::~enemy()
{
}
