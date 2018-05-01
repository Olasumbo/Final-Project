/*
 * Dealer.h
 *
 *  Created on: Apr 5, 2018
 *      Author: obaba
 */
#include <vector>
#include <iostream>

#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"

using namespace std;


class Dealer
{
	private:
		//vector<int> hand;
		void Deal( Deck theDeck, Player P_hand);
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

