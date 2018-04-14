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

#ifndef PLAYER_H_
#define PLAYER_H_

class Player
{
	private:
	vector<int> hand;
	int cansplit();
	int players_total;
	string player;
	int card_total;
	int bet;
	void Deal();

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
