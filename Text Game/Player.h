#pragma once
#include <iostream>

class player
{
public:
	int hp;
	int temphp;
	int maxhp;
	int armorbuff;
	int armor;
	int level;
	int rpclass;
	int clvl;
	int pstr;
	int pdex;
	int pluc; 
	int pcha; 
	int pvit; 
	int pintel; 
	int pwis;
	std::string pname;


	player();

	player(int hp, int temphp, int maxhp, int armorbuff, int armor, int level, int rpclass, int clvl, int pstr, int pdex, int pluc, int cha, int pvit, int pintel, int pwism, std::string pname);

	~player();
};