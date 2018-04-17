/*
 * Dealer.h
 *
 *  Created on: Apr 5, 2018
 *      Author: obaba
 */
#include <vector>
#include <iostream>
#include "Cards.h"
using namespace std;

#ifndef DEALER_H_
#define DEALER_H_

class Dealer
{
	private:
	//vector<int> hand;
	void Deal();
	int dealer_hand;
	int dealer_cardtotal;

	public:
	virtual void Hit();
	virtual int CheckHand();
	void Shuffle();
	virtual ~Dealer();

};



#endif /* DEALER_H_ */
