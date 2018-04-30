//============================================================================
// Name        : BlackJack.cpp
// Author      : Ola and Seth
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

#include "Card.h"
#include "Deck.h"
#include "Dealer.h"
#include "Player.h"
#include "System.h"

using namespace std;


int main()
{
	int num_player;
	int counter = 0;
	vector < Player> Players;
	Deck theDeck;

	cout << "" << endl; // prints 
	cout << "Welcome to Casino 3220, Lets Play some BlackJack" << endl; // prints
	//cout << "***********************GAME ON*******************************" << endl;
	cout << "How many Player would you like to play with today" << endl;
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
		Player *batman = new Player();
		Players.push_back(*batman);
	}

	for( Player foreachplayer : Players )// This will get the names of each players.
	{
		cout << "Enter your name" << endl;
		cin >> foreachplayer.Playersname;
	}

	Player *computergame = new System();
	Players.push_back(*computergame );
	Dealer obj;


	int gameNotOver;

	while( gameNotOver )
	{
		for( Player foreachplayer : Players )
		{
			foreachplayer.initBet();
			foreachplayer.choice(theDeck);
			foreachplayer.player_hands();
			foreachplayer.CheckWin(obj);
			if(foreachplayer.CheckWin(obj) == 1)
			{
				return 0;
			}
		}
		gameNotOver = obj.getdealerhand();
	}

	for( Player foreachplayer : Players )// This will get the names of each players.
	{
		delete &foreachplayer;
	}

	return 0;
}
