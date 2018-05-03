
#include "Deck.h"
#include <vector>

vector<Card*> Deck::getDeck()
{
	return *Deckholder;
}


void Deck::changeDeck( vector<Card*> * leeroyJenkins )
{
	Deckholder = leeroyJenkins;
}

void Deck::createDeck()
{

	int i, j;
	for(i = 0; i < 4; i++)
	{
		for( j = 1; j <= 13; j++ )
		{
			Card * newCard = new Card( j, i );
			Deckholder->push_back( newCard );
		}
	}

	/*
	 * 0: Card( spade, 1 )
	 * 1: Card( spade, 2 )
	 * .. .
	 * 51: Card( hearts, 13 )
	 */
	//randomCard.getInfo();
	/*
	 * Suite: Heart
	 * Value: num
	 */

	/*  vector<string> Rank = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
	vector<char> Suite = {'h', 'd', 'c', 's'};

	for(int i = 0; i < 4; i++)
	{
			for(int j = 0; j < 13; j++)
			{
				Deckholder.push_back(Card(Rank[j], Suite[i]));
			}
	}*/
	// This should copy all the element from each card vector and place them into Deckholder.
	// In Total Deckholder should hold 52 cards.
	/*Deckholder.insert( Deckholder.end(), lasCards.getClub().begin(), lasCards.getClub().end() );
	Deckholder.insert( Deckholder.end(), lasCards.getDiamond().begin(), lasCards.getDiamond().end() );
	Deckholder.insert( Deckholder.end(), lasCards.getHeart().begin(), lasCards.getHeart().end() );
	Deckholder.insert( Deckholder.end(), lasCards.getSpade().begin(), lasCards.getSpade().end() );*/

}

void Deck::displayDeck()
{
	cout << "\nThe size of the deck is " << Deckholder->size() << endl;
	for(auto i: *Deckholder)
	{
		cout << i->getNiceName() << endl;
	}
}

