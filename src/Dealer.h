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

#include "Deck.h"
#include "Card.h"
#include "Player.h"
//class Player; // forward declaration of Player

using namespace std;


class Dealer
{
	private:
	
		void Deal( Deck theDeck, vector<Card> P_hand);
		int dealer_hand;
		int dealer_cardtotal;
		Deck mainDeck;

	public:
		Dealer() { };
		~Dealer() { };
		void Shuffle(Deck theDeck);

		//Accessor Functions
		int getdealerhand();
		int getdealercardtot();
};


#endif
