/*
 * Player.h
 *
 *  Created on: Apr 5, 2018
 *      Author: obaba
 */
#include <vector>
#include <iostream>
#include <string>

#include <Cards.h>
#include <Deck.h>
#include <Dealer.h>

using namespace std;

#ifndef PLAYER_H_
#define PLAYER_H_

class Player
{
	private:
	vector<int> hand;
	int cansplit();
	int players_total;//Number of players
	string player; //player name
	int card_total; //player totals card
	int bet;
	int bank;
	void Deal()// I need a place where all the cards are stored then iterate through it and deal a random 2 card.
	{
		cerr <"Dealing Cards ......\n";
		for(int i = 0 ; i < 2; i++)
		{

		}
	}

	public:
	void Hit();
	int player_hands();
	int CheckHand();
	void Stay();
	void Double();
	void Split();
	char choice();

};




#endif /* PLAYER_H_ */
