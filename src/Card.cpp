/*
 * Card.cpp
 *
 *  Created on: Apr 9, 2018
 *      Author: obaba
 */
#include "Card.h"

using namespace std;

Card::Card()
{
}

Card::Card(string Rank, char Suite)
{

}

char Card::getValue()
{
	if( value == 11 )
	{
		return "J";
	}
	else if( value == 12)
	{
		return "Q";
	}

	return ( char ) value;
}

/*void getcard(Card::Rank cd_rank, Card::Suite cd_suit )
{
	suit = cd_suit;
	rank = cd_rank;
}

char Card::getSuiteChar()
{
	char john = 'c';
	return john;
}

Card::Rank getRank()
{
	return rank;
}

Card::Suite getSuite()
{
	return suit;
}

void Card::setRank( Card::Rank cd_rank)
{
	rank = cd_rank;
}*/

/*
int Card::getValue()
{
	switch( rank )
	{
		case ACE:
			return 1;
		case TWO:
			return 2;
		case THREE:
			return 3;
		case FOUR:
			return 4;
		case FIVE:
			return 5;
		case SIX:
			return 6;
		case SEVEN:
			return 7;
		case EIGHT:
			return 8;
		case NINE:
			return 9;
		case TEN:
			return 10;
		case JACK:
			return 11;
		case QUEEN:
			return 12;
		case KING:
			return 13;
		default:
			return 0;
	}
}

*/

