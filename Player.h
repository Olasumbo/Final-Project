/*
 * Player.h
 *
 *  Created on: Apr 5, 2018
 *      Author: obaba
 */
#include <vector>
#include <iostream>
#include <string>
#include <iomanip>

#include <Cards.h>
#include <Deck.h>
#include <Dealer.h>

using namespace std;

#ifndef PLAYER_H_
#define PLAYER_H_

class Player: public Dealer
{
private:
	vector<int> hand;
	int cansplit();
	int players_total;//Number of players
	int card_total; //player totals card
	double bet, bank;
	string *Playersname; //player name
	void Deal()// I need a place where all the cards are stored then iterate through it and deal a random 2 card.
	{
		cerr <"Dealing Cards ......\n";
		for(auto i: Deck::Card)
		{
			hand.push_back(i);
			hand.push_back(i);
			Deck::Card.pop_back(); //I am not sure if this is write at all but what am tring to do is to deal to cards into the players hands,
			Deck::Card.popback(); // then pop those cards off the total card vector
		}

	}

public:
	void Hit();
	int player_hands();
	int CheckWin();
	void Stay();
	void Double();
	void Split();
	void initBet();
	char choice();

};




#endif /* PLAYER_H_ */
