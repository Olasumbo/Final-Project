/*
 * Player.cpp
 *
 *  Created on: Apr 13, 2018
 *      Author: obaba
 */

//#include <Player.h>

int Player::cansplit()
{
	int count;
	for(auto i:hand)
	{
		if( i == TEN )
		{
			count++;
		}
		if( i == KING )
		{
			count++;
		}
		if( i == QUEEN)
		{
			count++;
		}
		if( i == JACK )
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

int Player::player_hands()
{
	int sum;
	for(auto i:hand)
	{
		sum += hand;
	}
	if(sum > 21)
	{
		for(auto i:hand)
		{
			if(i == TEN)
			{
				i = ACE;
			}
			else
			{
				return 0;
			}
		}
	}
}
int Player::CheckHand()
{
	// Check to see if player or system hand is 21
	int sum = 0;

}
void Player:: Stay()
{

}
void Player:: Double()
{
	//Double at anytime
	if(bet > 500)
	{
		cout<<"You cannot double you bet because you dont have enough found" << endl;
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




