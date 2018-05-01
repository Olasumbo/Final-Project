
#include "Deck.h"
#include <vector>

vector<Card> Deck::getDeck()
{
	return Deckholder;
}

void Deck::createDeck()
{
	int i = 0, j = 0;
	
	for(i = 0; i < 4; i++)
	{	
		for(j = 0; j < 13; j++)
		{
			Deckholder.push_back( Card( (Card::Rank)i, (Card::Suite)j ) );
		}
	}
}  

/*void Deck::displayDeck()
{
	int i = 0;
	cout << "\nThe size of the deck is " << Deckholder.size() << endl;
	for(i = 0; i < Deckholder.size(); i++)
    {
        cout << Deckholder[i] << endl;
    }
}*/

