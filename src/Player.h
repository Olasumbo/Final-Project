/*
 * Player.h
 *
 *  Created on: Apr 5, 2018
 *      Author: obaba
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include <vector>
#include <iostream>
#include <string>
#include <iomanip>
#include <utility>
#include <algorithm>
#include <list>
#include <iterator>
#include <chrono>
#include <bits/stdc++.h>

#include "Card.h"
#include "Deck.h"
//#include "Dealer.h"
//class Dealer;

using namespace std;

class Player
{
protected:

	int players_total;//Number of players
	double bet, bank;
	vector<Card*> hand;

public:
	int card_total; //player totals card
	//void Deal( Deck theDeck ); // I need a place where all the cards are stored then iterate through it and deal a random 2 card.
	Player();
	void Hit( Deck * theDeck );
	int player_hands();
	int CheckWin(int theDealerCardsSum);
	void Stay();
	void Double();
	void Split();
	virtual void initBet();
	virtual char choice(Deck * theDeck);
	void Rule();
	vector<Card*> gethand();
	string Playersname; //player name
	virtual ~Player(){}
	int gameOver = 0;
	void addToHand( int rank, int suit )
	{
		// IN THIS METHOD add a new card to the player's hand
		Card * newCard = new Card( rank, suit );
		hand.push_back( newCard );
	}
	void showHand()
	{
		//Loop through the vector and output EACH card in the hand
		for( Card * c : hand )
		{
			cout << "> " << c->getNiceName() << endl;
		}
	}
	void clearHand(){ hand.clear(); }
	int gethandSize() { return hand.size(); }
	int getHandTotal()
	{
		int total = 0;
		//Loop through the vector and output EACH card in the hand
		for( Card * c : hand )
		{
			total += c->getValue();
		}

		return total;
	}

};




#endif /* PLAYER_H_ */
