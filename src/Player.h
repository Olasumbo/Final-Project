/*
 * Player.h
 *
 *  Created on: Apr 5, 2018
 *      Author: obaba
 */
#include <vector>
#include <iostream>
#include <string>
#include <iomanip>

#include <list>
#include <iterator>
#include <chrono>

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Card.h"
#include "Deck.h"
#include "Dealer.h"
//class Dealer;

using namespace std;

class Player
 {
	protected:
		vector<Card> hand;
		int players_total;//Number of players
		double bet, bank;
		int cansplit();


	public:
		int card_total; //player totals card
		//void Deal( Deck theDeck ); // I need a place where all the cards are stored then iterate through it and deal a random 2 card.
		Player();
		void Hit( Deck theDeck );
		int player_hands();
		int CheckWin(Dealer theDealer);
		void Stay();
		void Double();
		void Split();
		virtual void initBet();
		virtual char choice(Deck theDeck);
		void Rule();
		vector<Card> gethand();
		string Playersname; //player name
		virtual ~Player();

};




#endif /* PLAYER_H_ */
