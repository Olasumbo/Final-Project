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
#include <algorithm>
#include <random>
using namespace std;

class Deck
{
	private:
	public:
		Deck() { num_cards = 52; };
		~Deck() { };
		vector<Card*> * Deckholder = new vector<Card*>;
		int num_cards;


		vector<Card*> getDeck();
		void createDeck();
		void displayDeck();
		void changeDeck( vector<Card*> * leeroyJenkins );
};


#endif /* DECK_H_ */   
