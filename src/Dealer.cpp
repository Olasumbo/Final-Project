#include "Dealer.h"
#include "Player.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void Dealer::Shuffle()
{
	int i=0 randomCard=0;
	
	for (i=0; i<52; i++)
	{
		randomCard=rand()%52;

		Card swap=mainDeck[i];            // swaps card with random card
		mainDeck[i]=mainDeck[randomCard];
		mainDeck[randomCard]=swap;
	}
}

int Dealer::getdealerhand()
{
	return dealer_hand;
}

int Dealer::getdealercardtot()
{
	return dealer_cardtotal;  
}
