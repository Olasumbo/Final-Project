/*
 * System.h
 *
 *  Created on: Apr 10, 2018
 *      Author: obaba
 */

#include <Cards.h>
#include <Deck.h>
#include <Player.h>
#include <Dealer.h>

#ifndef SYSTEM_H_
#define SYSTEM_H_


class System
{
private:
	Deck cards;
	Player *players;
	Dealer game_delear;
	int num_of_players;
public:
	System();
	~System();

};


#endif /* SYSTEM_H_ */
