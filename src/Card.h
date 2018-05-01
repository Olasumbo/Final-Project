#include <iostream>
#include <string>
#include <ostream>
using namespace std;

#ifndef CARD_CONST
#define CARD_CONST

class Card
{
	public:
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
		Card();
		Card(Card::Rank cd_rank, Card::Suite cd_suit);
		Card::Suite suit;
		Card::Rank rank;

		Card::Rank getRank();
		Card::Suite getSuite();
		void setRank(Card::Rank cd_rank );
		char getSuiteChar();
		int getValue();
		void printCards();

	private:

};

#endif
