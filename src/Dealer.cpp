

#include "Dealer.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

void Dealer::Shuffle(Deck theDeck)
{
	int x;
	srand(time(NULL));
	x = rand() % 52;
	random_shuffle( theDeck.getDeck().begin(), theDeck.getDeck().begin(), x );
}

void Dealer::Deal( Deck theDeck, Player P_hand)
{
	cerr << "Dealing Cards ......\n";

	/*
	 *
	 * Alrighty, so there's just a bit of logic to work out here. Right now, this is what's happening:
	 * 	You've created a loop that will run 52 times (for every card in the Deck).
	 *
	 * What you want is like what you told me the other day:
	 * 	1. Load all the cards into Deck
	 * 	2. Randomly select 2 cards, the easiest way to do that is going to be just generating a random number between 0-51.
	 *
	 */
	//vector<Card> tempDeck;
	int i, x;
	for( i = 0; i < 2; i++ )
	{
		x = rand() % 52;
		move( theDeck.getDeck().begin() + x, theDeck.getDeck().begin() + x,P_hand.gethand().begin() );
	}

	/*(for(auto i: Deck::Card)
	{
		hand.push_back(i);
		hand.push_back(i);
		Deck::Card.pop_back(); //I am not sure if this is write at all but what am tring to do is to deal to cards into the players hands,
		Deck::Card.popback(); // then pop those cards off the total card vector
	}*/
}
int Dealer::getdealerhand()
{
	return dealer_hand;
}

int Dealer::getdealercardtot()
{
	return dealer_cardtotal;  
}
