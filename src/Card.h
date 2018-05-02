#ifndef CARD_CONST
#define CARD_CONST

#include <iostream>
#include <string>
#include <ostream>
using namespace std;



class Card
{
private:
	/*vector<int> Rank = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	//vector<int> Suite = { 0, 1, 2, 3};
	*/
	string x_Rank;
	char x_Suite;

public:
	~Card() {};
	Card();
	Card(string Rank, char Suite);
	void printCards();

	/*enum Rank
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
		};*/

	//Card::Suite suit;
	//Card::Rank rank;

	//void getcard(Card::Rank cd_rank, Card::Suite cd_suit );

	//Card::Rank getRank();
	//Card::Suite getSuite();
	//void setRank(Card::Rank cd_rank );
	//char getSuiteChar();
	//int getValue();
	const vector<string>& getRank() const {
		return Rank;
	}

	void setRank(const vector<string>& rank = { "2", "3", "4", "5", "6", "7",
			"8", "9", "10", "J", "Q", "K", "A" }) {
		Rank = rank;
	}

	const vector<char>& getSuite() const {
		return Suite;
	}

	void setSuite(const vector<char>& suite = { 'h', 'd', 'c', 's' }) {
		Suite = suite;
	}
};

#endif
