#ifndef CARD_CONST
#define CARD_CONST

#include <iostream>
#include <string>
#include <ostream>
#include <vector>

using namespace std;



class Card
{
private:


	string value;
	string suit;


	//vector<string> card = {"2", "3", "4", "5", "6", "7", "8", "9", "1", "10", "10", "10", "11"};


	/*vector<string> Heart = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
	vector<string> Diamond = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
	vector<string> Club = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};*/

public:
	~Card() {};
	Card();
	Card(string Rank, char Suite);
	const vector<string>& getClub() const {
			return Club;
		}

		void setClub(const vector<string>& club) {
			Club = club;
		}

		const vector<string>& getDiamond() const {
			return Diamond;
		}

		void setDiamond(const vector<string>& diamond) {
			Diamond = diamond;
		}

		const vector<string>& getHeart() const {
			return Heart;
		}

		void setHeart(const vector<string>& heart) {
			Heart = heart;
		}

		const vector<string>& getSpade() const {
			return Spade;
		}

		void setSpade(const vector<string>& spade) {
			Spade = spade;
		}

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
};
#endif
