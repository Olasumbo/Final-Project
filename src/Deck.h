/*
 * Deck.h
 *
 *  Created on: Apr 10, 2018
 *      Author: obaba
 */

#ifndef DECK_H_
#define DECK_H_
#include "Card.h"

#include <vector>
using namespace std;

class Deck
{
	private:
		vector<Card> Deckholder;
		int num_cards;

	public:
		Deck() { num_cards = 52; };
		~Deck() { };

		vector<Card> getDeck();
		void createDeck();
		void displayDeck();
};





#endif /* DECK_H_ */   
