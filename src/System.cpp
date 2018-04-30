/*
 * System.cpp
 *
 *  Created on: Apr 13, 2018
 *      Author: obaba
 */
#include "System.h"

System::System()
{

}

System::~System()
{

}

char Player::choice()
{
	cout << " Hit, Stay, Double, Split or Exit ?" << endl;
	cout << "Press H to get a card\n, Press S to Stay\n Press D to Double\n Press P to Split\n E for Exit" << endl;
	char c = ' ';
	cin >> c;
	switch(c)
	{
	case 'H':
	case 'h':
	{
		Hit(theDeck); // This passes the deck into the function
		break;
	}
	case 'S':
	case 's':
	{
		Stay();
		break;
	}
	case 'D':
	case 'd':
	{
		Double(); // if the player wants to
		break;
	}
	case 'P':
	case 'p':
	{
		cansplit();
		break;
	}
	case 'E':
	case 'e':
	{
				exit(EXIT_SUCCESS);
				break;
	}
	default:
			cout << "Invalid Selection. Please try Again." << endl;
	}
	return 0;
}

void System:: start()
{
	int n;
	//cout << "******Game Start!******"<<endl;
	cout << "1. View rules" << endl;
	cout << "2. Play Blackjack" << endl;
	cout << "3. Go to main menu" << endl;

	switch(n)
	{
	case 1:
	{
		Rule();
		break;
	}
	case 2:
	{
		choice();
		break;
	}
	case 3:
	{

	}
	}
	//choice();

}

