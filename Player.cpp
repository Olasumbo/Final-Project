/*
 * Player.cpp
 *
 *  Created on: Apr 13, 2018
 *      Author: obaba
 */

#include <Player.h>

Player::Player()
{
	players_total = 0;
	card_total = 0;
    bank = 1000;
    bet = 0;
}

int Player::cansplit()
{
	int count;
	for(auto i:hand)
	{
		if( i == Card::TEN )
		{
			count++;
		}
		if( i == Card::KING )
		{
			count++;
		}
		if( i == Card::QUEEN)
		{
			count++;
		}
		if( i == Card::JACK )
		{
			count++;
		}
	}
	if ( count == 2 )
	{
		cout << "Split Accepted" << endl;
		Split();

	}
	else
	{
		cout << "Sorry, You cannot Split your Hand" << endl;
	}
	return 0;
}

char Player::choice()
{
	cout << " Blackjack, Hit, Stay, Double or Split ?" << endl;
	cout << "Press H to get a more card\n, Press S to Stay\n Press D to Double\n Press SP to Split" << endl;
	char c = ' ';
	cin >> c;
	return c;
}

void Player:: Hit()
{
	//Deal 2 more cards to player or system
	Deal();
}

int Player::player_hands() // This calculate the total number of the player's hand
{
	for(auto i:hand)
	{
		card_total += hand;
	}
	if(card_total > 21)
	{
		for(auto i:hand)
		{
			if(i == Card::TEN)
			{
				i = Card::ACE;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}
int Player::CheckHand()//This is where the win, lose or busted will take place
{
	// Check to see if player or system hand is 21
	if(card_total == 21)
	{
		cerr << "BLACKJACK\n"
			 << "Your card total was" << card_total <<endl;
	}
	else if (card_total > 21)
	{
		cerr << "YOU BUSTED\n"
		 	 << "Your card total was" << card_total <<endl;
	}
	else if (card_total < 21)
	{
		cerr << "YOU LOST\n"
			 << "Your card total was" << card_total <<endl;
	}
	return 0;

}
void Player:: Stay()
{

}
void Player:: Double()
{
	//Double at anytime
	if(bet > 500)
	{
		cout<<"You cannot double you bet because you don't have enough fund" << endl;
	}
	else
	{
		bet = ( bet * 2 );
	}
}

void Player::Split()
{
	//If player_hand has an Ace and a JACK/Queen/King then they can split into two

}




