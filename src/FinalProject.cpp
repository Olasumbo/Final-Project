//============================================================================
// Name        : BlackJack.cpp
// Author      : Ola and Seth
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <ctime>
#include <algorithm>
#include <random>

#include "Card.h"
#include "Deck.h"
#include "Dealer.h"
#include "Player.h"
#include "System.h"

using namespace std;


int main( void )
{
	srand (time(NULL));
	//x_deck.displayDeck();
	int num_player;
	int counter = 0;
	vector <Player*> Players;
	Deck * theDeck = new Deck();
	theDeck->createDeck();
	Player * batman;
	Dealer obj;

	cout << "" << endl; // prints 
	cout << "Welcome to Casino 3220, Lets Play some BlackJack" << endl; // prints
	cout << "Rules of the Game\n" << endl;
	batman->Rule();

	cout << "\n\n***********************GAME ON*******************************" << endl;

	cout << "\n\nHow many Player would you like to play with today" << endl;
	cin >> num_player;
	while(num_player >= 4)
	{
		cout << "You can only play with a Maximum of 5 People including the Computer"
				"You only have three trials to pick number of players"<< endl;
		cin >> num_player;
		counter++;
		if ( counter == 3 )
		{
			cout<<" Sorry, you really have to pay attention to instructions" << endl;
			return 1;
		}
	}

	for( int i = 0; i < num_player; i++ ) // Amount of human playing in the game
	{
		batman = new Player();
		Players.push_back(batman);
	}

	for( Player * foreachplayer : Players )// This will get the names of each players.
	{
		cout << "Enter your name: " << endl;
		cin >> foreachplayer->Playersname;
		//cout << foreachplayer->Playersname << endl;
		cout << "Get initial Bet! P: " << foreachplayer->Playersname  << endl;
		foreachplayer->initBet();
		//Dealing cards
		obj.Deal( theDeck , foreachplayer );

		//cout << foreachplayer->Playersname << endl;
	}
	Player *computergame = (Player * ) ( new System() );
	Players.push_back( computergame );
	obj.Deal( theDeck , computergame );
	obj.DealMe( theDeck );

	int gameNotOver = 1;
	obj.shuffle_vector(theDeck); // Shuffles the card
	while( gameNotOver )
	{
		//cout << " Error the life\n";
		//auto rng = default_random_engine { };
		//shuffle( theDeck.getDeck().begin(), theDeck.getDeck().begin(), rng );
		//random_shuffle( theDeck.getDeck().begin(), theDeck.getDeck().end() );


		for( Player * foreachplayer : Players )
		{
			//start(theDeck)

			if( foreachplayer->gameOver == 0 )
			{
				cout << "It is now " << foreachplayer->Playersname << "'s turn" << endl;
				cout << "This are the cards in your hands (" << foreachplayer->getHandTotal() << ")" << endl;

				foreachplayer->showHand();

				cout << "Get choice! P: " << foreachplayer->Playersname  << endl;
				foreachplayer->choice(theDeck);

				cout << foreachplayer->Playersname  << "'s New Total Is: " << foreachplayer->getHandTotal() << endl;

				/*cout << "Check if win! P: " << foreachplasyer->Playersname  << endl;
				foreachplayer->CheckWin(obj.getdealerhand());*/

				if(foreachplayer->CheckBust(obj.getdealerhand()) == 1)
				{
					foreachplayer->gameOver = 1;
				}

			}
			cout<< endl<< endl<< endl << endl;
		}


		int req = Players.size();
		int overs = 0;
		for( Player * foreachplayer : Players )
		{
			overs += foreachplayer->gameOver;
		}

		if( req == overs )
		{
			gameNotOver = 0;
		}

	}

	for( Player * foreachplayer : Players )
	{
		foreachplayer->CheckWin(obj.getdealerhand());
		delete foreachplayer;
	}
	return 0;
}
