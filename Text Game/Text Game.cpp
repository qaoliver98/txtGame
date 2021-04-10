#include "Header.h"
#include "Player.h"
using namespace std;


//Global Variables
int eventNum; //Handles the eventID so we know what event we are going to give the player
int day = 0; //Counts the number of days that have passed.

player p1; //player object

//Player Information
void characterCreation(); //Pick class, stats, etc.
void History(); //Generates history for world and world size
void Combat();

void Help(); //Function for the help menu

//Menues
void MenuGet(int& menuSelect); //This function is to bring up the menu screen/options
void Embark(); //Explore function allows for you to open a menu that can send you to different regions you have explored
void Descend_the_Dungeon(); //Dungeon function allows for you to enter the dungeon - an infinite level-scaling dungeon crawl where you can grind levels and gear
void City(); //Allows access to various 
int Exploration(int& exploreChoice); //This function will handle the actual exploration choice that are taken from embark.

void characterCreation()
{
	int a = ((rand() % 6) + 1); int b = ((rand() % 6) + 1); int c = ((rand() % 6) + 1); int d = ((rand() % 6) + 1);
	int pstr = (a + b + c + d) - std::min(a, std::min(b, std::min(c, d)));

	int a1 = ((rand() % 6) + 1); int a2 = ((rand() % 6) + 1); int a3 = ((rand() % 6) + 1); int a4 = ((rand() % 6) + 1);
	a = a1; b = a2; c = a3; d = a4;
	int pdex = (a + b + c + d) - std::min(a, std::min(b, std::min(c, d)));

	int b1 = ((rand() % 6) + 1); int b2 = ((rand() % 6) + 1); int b3 = ((rand() % 6) + 1); int b4 = ((rand() % 6) + 1);
	a = b1; b = b2; c = b3; d = b4;
	int pluc = (a + b + c + d) - std::min(a, std::min(b, std::min(c, d)));

	int c1 = ((rand() % 6) + 1); int c2 = ((rand() % 6) + 1); int c3 = ((rand() % 6) + 1); int c4 = ((rand() % 6) + 1);
	a = c1; b = c2; c = c3; d = c4;
	int pcha = (a + b + c + d) - std::min(a, std::min(b, std::min(c, d)));

	int d1 = ((rand() % 6) + 1); int d2 = ((rand() % 6) + 1); int d3 = ((rand() % 6) + 1); int d4 = ((rand() % 6) + 1);
	a = d1; b = d2; c = d3; d = d4;
	int pvit = (a + b + c + d) - std::min(a, std::min(b, std::min(c, d)));

	int e1 = ((rand() % 6) + 1); int e2 = ((rand() % 6) + 1); int e3 = ((rand() % 6) + 1); int e4 = ((rand() % 6) + 1);
	a = e1; b = e2; c = e3; d = e4;
	int pintel = (a + b + c + d) - std::min(a, std::min(b, std::min(c, d)));

	int f1 = ((rand() % 6) + 1); int f2 = ((rand() % 6) + 1); int f3 = ((rand() % 6) + 1); int f4 = ((rand() % 6) + 1);
	a = f1; b = f2; c = f3; d = f4;
	int pwis = (a + b + c + d) - std::min(a, std::min(b, std::min(c, d)));

	cout << "These are your current stats:\n";
	cout << "Strength: " << pstr << endl;
	cout << "Dexterity: " << pdex << endl;
	cout << "Luck: " << pluc << endl;
	cout << "Charisma: " << pcha << endl;
	cout << "Vitality: " << pvit << endl;
	cout << "Intelligence: " << pintel << endl;
	cout << "Wisdom: " << pwis << endl;


	p1.pstr = pstr;
	p1.pdex = pdex;
	p1.pluc = pluc;
	p1.pcha = pcha;
	p1.pvit = pvit;
	p1.pintel = pintel;
	p1.pwis = pwis;

	string pname;
	cout << "What is your name?" << endl;
	cin >> pname;
	p1.pname = pname;
	cout << "Your name is " << p1.pname << endl;

	map <string, string> pclasses;
	pclasses["A"] = "Paladin";
	pclasses["B"] = "Samurai";
	pclasses["C"] = "Knight";
	pclasses["D"] = "Monster Hunter";
	pclasses["E"] = "Buccaneer";
	pclasses["F"] = "Rogue";
	pclasses["G"] = "Dragoon";
	pclasses["H"] = "Hoplite"; 
	pclasses["I"] = "Martial Artist";
	pclasses["J"] = "Wrestler";
	pclasses["K"] = "Berserker";
	pclasses["L"] = "Gamba";
	pclasses["M"] = "Gunblade";
	pclasses["N"] = "Mecha";
	pclasses["O"] = "Energy Blade";
	pclasses["P"] = "Blue Mage";
	pclasses["Q"] = "Exile";
	pclasses["R"] = "White Mage";
	pclasses["S"] = "Red Mage";
	pclasses["T"] = "Cleric";
	pclasses["U"] = "Medic";
	pclasses["V"] = "Ranger";
	pclasses["W"] = "Druid";
	pclasses["X"] = "Rune Knight";
	pclasses["Y"] = "Demonologist";
	pclasses["Z"] = "Death Knight";
	pclasses["AA"] = "";
	pclasses["BB"] = "";
	pclasses["CC"] = "";
	pclasses["DD"] = "";
	pclasses["EE"] = "";

	cout << "You will now select a race and class.\n";

	string choice = "z";
	string letter;
	int classChoice;
	bool correctInput = false;

	cout << "Choose a class: " << endl;
	cout << "A. Paladin - a skilled warrior who wields holy energy to smite their enemies and defend their allies." << endl;
	cout << "B. Samurai - a skilled swordsfigher who uses various stances to increase their slicing capabilities." << endl;
	cout << "C. Knight -  " << endl;
	cout << "D. Monster Hunter - a skilled  " << endl;
	cout << "E. Buccaneer -  " << endl;
	cout << "F. Rogue -  " << endl;
	cout << "G. Dragoon -  " << endl;
	cout << "H. Hoplite -  " << endl;
	cout << "I. Martial Artist -  " << endl;
	cout << "J. Wrestler -  " << endl;
	cout << "K. Berserker -  " << endl;
	cout << "L. Gamba -  " << endl;
	cout << "M. Gunblade -  " << endl;
	cout << "N. Mecha -  " << endl;
	cout << "O. Energy Blade -  " << endl;
	cout << "P. Blue Mage -  " << endl;
	cout << "Q. Exile - " << endl;
	cout << "R. White Mage -  " << endl;
	cout << "S. Red Mage -  " << endl;
	cout << "T. Cleric -  " << endl;
	cout << "U. Medic -  " << endl;
	cout << "V. Ranger -  " << endl;
	cout << "W. Druid -  " << endl;
	cout << "X. Rune Knight -  " << endl;
	cout << "Y. Demonologist -  " << endl;
	cout << "Z. Death Knight -  " << endl;
	cout << "AA." << endl;

	cin >> letter;
	cout << endl;

	while (!correctInput)
	{
		
		if (pclasses[letter] == "Paladin")
		{
			cout << "Poop";
			correctInput = true;
		}
		
	}

}


int main()
{

	int menuSelect;

	srand(time(NULL));
	// Sleep(500);
	bool wantExit = false; //This variable determines the exit clause out of the game loop

	cout << endl;
	cout << "Welcome to Heroes of Aullyria!\n";
	cout << "Prepare yourself to embark on an epic journey where you will befriend heroes, discover ancient relics, wage war, and raise an empire." << endl;
	cout << "You have a long adventure ahead of you. Good luck! " << endl;
	//cout a message that describes what the game is about and the goal.

	characterCreation();

	while (wantExit == false)
	{


		MenuGet(menuSelect);

		if (menuSelect == 1)
		{

		}
		if (menuSelect == 2)
		{

		}
		if (menuSelect == 3)
		{

		}
		if (menuSelect == 4)
		{

		}
		if (menuSelect == 5)
		{
			cout << endl;
			Embark();
		}
		if (menuSelect == 6)
		{

		}
		if (menuSelect == 8)
		{

		}
		else if (menuSelect == 0)
		{
			wantExit = true;
		}
	}

	system("pause");
	return 0;
}


void MenuGet(int& menuSelect)
{
	cout << "################################################################################" << endl;
	cout << "Enter 1 to Descend into the Dungeon \n";
	cout << "Enter 2 to Enter the City \n";
	cout << "Enter 3 to View Property and Assets \n";
	cout << "Enter 4 to View Inventory and Character Sheet \n";
	cout << "Enter 5 to Embark \n";
	cout << "Enter 6 for Diplomacy\n"; 
	cout << "Enter 8 to explore the Dungeon \n";
	cout << "Enter 9 for Help \n";
	cout << "Enter 0 to Quit \n";
	cout << "################################################################################" << endl;
	cout << endl << endl;


	cin >> menuSelect;

}


void Embark()
{
	string choice = "z"; //This variable is for the choice of Y or N
	char letter; //Another variable for the letter that is being put into the string
	int exploreChoice;
	bool correctInput = false; //Explore loop condition

	cout << "################################################################################" << endl;
	cout << "As you leave the gates to the city, a vast and open land reveals itself to you. You preare to embark...\n";
	cout << "Will you embark? Enter Y for yes, and N for no.\n";

	cin >> choice;
	cout << endl;

	letter = toupper(choice[0]);

	while (!correctInput)
	{
		switch (letter)
		{
			case 'Y':
				cout << "May the goddess of fortune and adventure smile upon thee...\n";
				cout << "Enter 1 to explore the Forest.\n";
				cout << "Enter 2 to explore the Old Fortress.\n";

				cin >> exploreChoice;
				Exploration(exploreChoice);

				cout << "################################################################################" << endl;
				correctInput = true; //Breaks us out of the explore loop
				break;

			case 'N':
				break;

			default:
				cout << "Wrong input. Type Y for yes, or N for no." << endl;
				cout << endl;
				break;
		}
	}


}


int Exploration(int& exploreChoice)
{
	day++;
	int eventNum = (rand() % 100) + 1; //Picks a random number between 1 and 100

	if (exploreChoice == 1) //Forest
	{
		cout << "You explore the Forest.\n";

		if (eventNum >= 50)
		{
			cout << "You find an old chest.\n";
		}
		if (eventNum <= 49)
		{
			cout << "You find some Forest mushrooms.\n";
		}

	}

	if (exploreChoice == 2) //Old Fortress
	{
		cout << "You explore the Old Fortress.\n";
		
	}

	if (exploreChoice >= 3 )
	{
		cout << "This does not bode well for you...\n"; //Incorrect input message
	
	}

	return exploreChoice;
}


void Descend_the_Dungeon()
{

}


void Combat()
{

}