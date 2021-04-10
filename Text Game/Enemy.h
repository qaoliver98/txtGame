#pragma once
#include <iostream>

class enemy
{
public:
	int dungeonEnemyHP;
	int dungeonEnemyArmour;
	int dungeonEnemyAttack;
	int dungeonEnemyRes;
	int dungeonEnemyType;
	std::string dungeonEnemyName;


	enemy();

	enemy(int dungeonEnemyHP, int dungeonEnemyArmour, int dungeonEnemyRes, int dungeonEnemyAttack, int dungeoneEnemyType, std::string dungeonEnemyName);

	~enemy();
};