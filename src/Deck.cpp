
#include "Deck.h"
#include <vector>

vector<Card> Deck::getDeck()
{
	return Deckholder;
}

/*void Deck::createDeck()
{
	int i = 0, j = 0;
//	Card
	
	for(i = 0; i < 4; i++)
	{	
		for(j = 0; j < 13; j++)
		{
			vector<int> tmp;
			tmp.push_back(i);
			tmp.push_back(j);
			Deckholder.push_back(tmp);
		}
	}
}  */
void Deck::createDeck()
{
    vector<string> Rank = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
	vector<char> Suite = {'h', 'd', 'c', 's'};

	for(int i = 0; i < 4; i++)
	{
			for(int j = 0; j < 13; j++)
			{
				Deckholder.push_back(Card(Rank[j], Suite[i]));
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

