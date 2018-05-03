/*
 * Card.cpp
 *
 *  Created on: Apr 9, 2018
 *      Author: obaba
 */
#include "Card.h"

using namespace std;

Card::Card( int _value, int _suit)
{
	value = _value;
	suit = _suit;
}

int Card::getValue()
{
	return value;
}
int Card:: getsuite()
{
	return suit;
}

string Card::getNiceName()
{
	string nicename;
	switch( value )
	{
	case 1:
		nicename += "Ace";
		break;
	case 2:
		nicename += "2";
		break;
	case 3:
		nicename += "3";
		break;
	case 4:
		nicename += "4";
		break;
	case 5:
		nicename += "5";
		break;
	case 6:
		nicename += "6";
		break;
	case 7:
		nicename += "7";
		break;
	case 8:
		nicename += "8";
		break;
	case 9:
		nicename += "9";
		break;
	case 10:
		nicename += "10";
		break;
	case 11:
		nicename += "Jack";
		break;
	case 12:
		nicename += "Queen";
		break;
	case 13:
		nicename += "King";
		break;
	}
	nicename += " of ";

	switch( suit )
	{
	case 0:
		nicename += "hearts";
		break;
	case 1:
		nicename += "clubs";
		break;
	case 2:
		nicename += "spades";
		break;
	case 3:
		nicename += "diamonds";
		break;
	}

	return nicename;
}
