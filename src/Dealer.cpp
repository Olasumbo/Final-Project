

#include "Dealer.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <algorithm>
#include <random>
#include <list>

//#include <vector>

/*void Dealer::Shuffle(Deck theDeck)
{
	int x;
	srand(time(NULL));
	x = rand() % 52;
	vector<Card*> tmpCards = theDeck.getDeck();
    //random_shuffle( theDeck.getDeck().begin(), theDeck.getDeck().end(), x );
	//random_shuffle(tmpCards.begin(), tmpCards.end(), x);
}*/
void Dealer:: shuffle_vector( Deck * D_holder )
{
	srand( time(NULL) );

	vector<Card*> temp1, temp2;

	//D_holder.getDeck().clear();
	int i, k;
	for( i = 51; i >= 0; i-- )
	{
		k = rand() % i;
		cout << "Random Card: " << i << " : " <<  k << endl;
		cout << " - " << D_holder->getDeck()[k]->getNiceName() << endl;
		//swap( D_holder.getDeck()[i], D_holder.getDeck()[k]);

		temp1.push_back( D_holder->getDeck()[k] );
		//D_holder->getDeck().erase( D_holder->getDeck().begin() + k );

		/*
		int j;
		for( j = 0; k < temp1.size(); j++ )
		{
			cout << "    " << temp1[j]->getNiceName() << endl;
		}

		D_holder.getDeck().erase( D_holder.getDeck().begin() + k, D_holder.getDeck().begin() + k );*/
	}

	//D_holder->getDeck().swap( temp1 );
	D_holder

	cout << "List Cards: " << endl;
	for( i = 51; i >= 0; i-- )
	{
		cout << "> " << D_holder->getDeck()[i]->getNiceName() << endl;
	}

    /*for (int i = 0; i < 52; i++)
    {
        int randomIndex = rand() % D_holder.size();
        int randomIndex2 = rand() % D_holder.size();
        if (randomIndex2 == randomIndex) // make sure the two random values aren't the same
        {
            do
            {
            	randomIndex2 = rand() % D_holder.size();
             } while (randomIndex2 == randomIndex);
        }
        D_holder.push_back(NULL);
        int last_index_number = (D_holder.size() - 1);
        D_holder[last_index_number] = D_holder[randomIndex];
        D_holder[randomIndex] = D_holder[randomIndex2];
        D_holder[randomIndex2] = D_holder[last_index_number];
        //cout<< D_holder[randomIndex2]->getValue()<< endl;
        //cout<< D_holder[randomIndex2]->getNiceName()<< endl;
        D_holder.pop_back(); // bring vector back to original size
    }*/
}

void Dealer::Deal( Deck * theDeck, vector<Card*> P_hand)
{
	int i, x;
	cerr << "Dealing Cards ......\n";
	for( i = 0; i < 2; i++ )
	{
		x = rand() % 52;
		P_hand.push_back(theDeck->getDeck()[x] );
		theDeck->getDeck().erase( theDeck->getDeck().begin() + x, theDeck->getDeck().begin() + x );

		//move( theDeck.getDeck().begin() + x, theDeck.getDeck().begin() + x,P_hand.begin() );
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
