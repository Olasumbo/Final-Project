/*
 * Dealer.h
 *
 *  Created on: Apr 5, 2018
 *      Author: obaba
 */
#include <vector>

#ifndef DEALER_H_
#define DEALER_H_

class Dealer
{
	private:
	//vector<int> hand;
	void Deal();

	public:
	virtual void Hit();
	virtual int CheckHand();
	void Shuffle();
	virtual ~Dealer();

};



#endif /* DEALER_H_ */
