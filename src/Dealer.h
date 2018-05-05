/*
 * Dealer.h
 *
 *  Created on: Apr 5, 2018
 *      Author: obaba
 */
#ifndef DEALER_H_
#define DEALER_H_

#include <vector>
#include <iostream>
#include <random>
#include <algorithm>
#include <random>

#include "Deck.h"
#include "Card.h"
#include "Player.h"
//class Player; // forward declaration of Player

using namespace std;


class Dealer
{
private:
	int dealer_hand;
	int dealer_cardtotal;
	Deck mainDeck;

public:
	Dealer() { dealer_hand = 0; dealer_cardtotal = 0; };
	~Dealer() { };
	void shuffle_vector( Deck * D_holder );
	void Deal( Deck * theDeck, Player * player );
	void addToHand( int rank )
	{
		// IN THIS METHOD add a new card to the player's hand
		dealer_hand += rank;
	}

	//Accessor Functions
	int getdealerhand();
	int getdealercardtot();
	void DealMe( Deck * theDeck );
};


#endif
