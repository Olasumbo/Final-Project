#include "Deck.h"
#include <vector>

vector<Card> Deck::getDeck()
{
	return Deckholder;
}

void Deck::createDeck()
{
/*	for( 4 times ) //Each suit
		for( 12 times) // Each number
			create newCard ()
			Deckholder.push_back(newCard);
		end loop
	end loop;*/
	
	//vector<Card> needAcard;
	
	int i=0, j=0;
	
	for(i=0; i<4; i++)
	{	
		//if(needAcard.getSuite())
		for(j=0; j<13; j++)
		{
			//if(needAcard.getRank())
			Deckholder.push_back(Card(i,j);
		}
	}
}  

void Deck::displayDeck()
{
	int i=0;
	
	cout << "\nThe size of the deck is " << Deckholder.size() << endl;
	
	for(i=0; i<Deckholder.size(); i++)
    {
        cout << Deckholder[i] << endl;
    }
    cout << "\n" << endl;
}

// vector<Card> Deck::usingDeck
// {
	// return Deckholder;
// }