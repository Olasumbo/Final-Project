#include <iostream>
#include <string>
#include <ostream>
using namespace std;

#ifndef CARD_CONST
#define CARD_CONST

class Card
{
	public:
		Card(int cardSuit=0, int cardRank=1);
		~Card() {};

		enum Rank
		{
			ACE = 1,
			TWO = 2,
			THREE = 3,
			FOUR = 4,
			FIVE = 5,
			SIX = 6,
			SEVEN = 7,
			EIGHT = 8,
			NINE = 9,
			TEN = 10,
			JACK = 11,
			QUEEN = 12,
			KING = 13
		};

		enum Suite
		{
			SPADE = 0, HEART = 1, CLUB = 2, DIAMOND = 3
		};

		Card::Rank getRank();
		Card::Suite getSuite();
		void printCards( Suite aSuite, Rank aRank );
		char getSuiteChar();
		int getValue();
		void setRank( Card::Rank newRank );
		void printCard();

	private:
		Suite theSuite; 
		Rank theRank;
		int rank;
		int suit;
		//int theCard;  //This cannot have the same name as the class. 'Card' is reserved. Also, I wouldn't use this.
};

#endif
