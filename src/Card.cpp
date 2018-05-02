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

/*void getcard(Card::Rank cd_rank, Card::Suite cd_suit )
{
	suit = cd_suit;
	rank = cd_rank;
}*/
Card:: Card(int rank, int suite)
{

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
}

void Card::printCards()
{
	switch( rank )
	{
		case ACE:
			cout << "ACE";
			break;
		case TWO:
			cout <<  "TWO";
			break;
		case THREE:
			cout <<  "THREE";
			break;
		case FOUR:
			cout <<  "FOUR";
			break;
		case FIVE:
			cout <<  "FIVE";
			break;
		case SIX:
			cout <<  "SIX";
			break;
		case SEVEN:
			cout <<  "SEVEN";
			break;
		case EIGHT:
			cout <<  "EIGHT";
			break;
		case NINE:
			cout <<  "NINE";
			break;
		case TEN:
			cout <<  "SOFT ACE";
			break;
		case JACK:
			cout <<  "JACK";
			break;
		case QUEEN:
			cout <<  "QUEEN";
			break;
		case KING:
			cout <<  "KING";
			break;
		default:
			cout <<  "FAILURE!!!";
			break;
	}
}

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

