/*
 * System.cpp
 *
 *  Created on: Apr 13, 2018
 *      Author: obaba
 */
#include "System.h"

System::System()
{
	Playersname = "Luis Rivera";
}

System::~System()
{

}

char System::choice(Deck * theDeck)
{
	cout << "Hit, Stay, Double, or Exit ?" << endl;
	cout << "Press H to get a card\n, Press S to Stay\n Press D to Double\n E for Exit" << endl;
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

void System::initBet()
{
	bet = 0;
	if(bank == 0)
	{
		cout << "You have no money in your account." << endl;
	}

	do
	{
		cout << setprecision(3) << "Current balance For " << Playersname << " is " << bank << endl;
		cout<<"How much would you like to bet? Enter amount now: ";
		cin >> bet;
		cin.clear();
		if(bet == 0)
		{
			cout << "You must bet to play" << endl;
		}
		else if(bet > bank)
		{
			cout << "You cannot bet more money than you have" << endl;
			bet = 0;
		}
	} while(bet == 0);
}

