 /*
 * Dealer.h
 *
 *  Created on: Apr 5, 2018
 *      Author: obaba
 */
#include <vector>
#include <iostream>

#ifndef DEALER_H_
#define DEALER_H_

#include "Deck.h"
//#include "Player.h"
class Player; // forward declaration of Player

using namespace std;


class Dealer
{
	private:
	
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


#endif
