/*
 * System.h
 *
 *  Created on: Apr 10, 2018
 *      Author: obaba
 */
#include <vector>
#include <iostream>
#include <string>

#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"

using namespace std;


#ifndef SYSTEM_H_
#define SYSTEM_H_


class System : public Player
{

private:


public:
	System();
	virtual ~System();
	char choice(Deck theDeck);
	void start(Deck theDeck);
	void initBet();

};


#endif /* SYSTEM_H_ */
