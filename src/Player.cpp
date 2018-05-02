/*
 * Player.cpp
 *
 *  Created on: Apr 13, 2018
 *      Author: obaba
 */

#include "Player.h"


Player::Player()
{
	players_total = 0;
	card_total = 0;
	bet = 0;
	bank = 1000;
	Playersname = " ";
}

void Player::initBet()
{
	bet = 0;
	if(bank == 0)
	{
		cout << "You have no money in your account." << endl;
	}

	do
	{
		cout << setprecision(3) << "Current balance For " << Playersname << " is " << bank << endl;
		cout<<"How much would you like to bet? Enter amount now: ";
		cin >> bet;
		cin.clear();
		if(bet == 0)
		{
			cout << "You must bet to play" << endl;
		}
		else if(bet > bank)
		{
			cout << "You cannot bet more money than you have" << endl;
			bet = 0;
		}
	} while(bet == 0);
}

vector<Card> Player::gethand()
{
	return hand;
}

char Player::choice(Deck theDeck)
{
	cout << " Hit, Stay, Double, or Exit ?" << endl;
	cout << "Press H to get a card\n, Press S to Stay\n Press D to Double\n Press P to Split\n E for Exit" << endl;
	char c = ' ';
	cin >> c;
	switch(c)
	{
	case 'H':
	case 'h':
	{
		Hit(theDeck); // This passes the deck into the function
		break;
	}
	case 'S':
	case 's':
	{
		Stay();
		break;
	}
	case 'D':
	case 'd':
	{
		Double(); // if the player wants to
		break;
	}
	case 'E':
	case 'e':
	{
				exit(EXIT_SUCCESS);
				break;
	}
	default:
			cout << "Invalid Selection. Please try Again." << endl;
	}
	return 0;
}

void Player:: Hit( Deck theDeck )
{
	//Deal 1 card at a time to player or system
	int x;
	x = rand() % 52;
	move( theDeck.getDeck().begin() + x, theDeck.getDeck().begin() + x, hand.begin() );
}

int Player::player_hands() // This calculate the total number of the player's hand
{
	for(auto i:hand)
	{
		cout << " players hand is" << endl;
		//i.printCard();
		card_total += i.getValue();
		cout << " players hand total = "<< card_total << endl;
	}
	if(card_total > 21)
	{
		for(auto i:hand)
		{
			if( i.getRank() == Card::TEN )
			{
				i.setRank( Card::ACE );
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}
//int Player::gethandsum(vector<Card> theDealerCardsSum)
//{
//	int sum_of_elems = 0;
//	for (auto& n : theDealerCardsSum)
//	{
//		 sum_of_elems = sum_of_elems + n;
//	}
//	return sum_of_elems;
//}
int Player::CheckWin(int theDealerCardsSum)
{
	// Check to see if player or system hand is 21
	if((theDealerCardsSum) > 21)
	{										//Dealer bust conditions
		cout << "Dealer Busts with " << (theDealerCardsSum) << endl;
		if(card_total > 21)
		{
			cout << Playersname <<" Busts with " << card_total << endl;
			cout << "You both Busted"<< endl;
			bank -= bet;
		}
		else
		{
			cout << Playersname << " Wins" << endl;
			bank += 2*bet;
			return 1;
		}
	}
	else if((theDealerCardsSum) == 21)
	{									//Dealer 21 conditions
		if(card_total > 21)
		{
			cout << Playersname << " Busts with " << card_total << endl;
			cout << "Dealer Wins Over " << Playersname << endl;
			bank -= bet;
		}
		else if(card_total == 21)
		{
			cout << "BLACKJACK " << Playersname << endl;
		}
		else
		{
			cout << "Dealer Wins Over " << Playersname << endl;
			bank -= bet;
		}
	}
	else
	{													//Dealer under 21 Conditions
		if(card_total > 21)
		{
			cout << Playersname << " Busts with " << card_total << endl;
			cout << "Dealer Wins Over " << Playersname << endl;
			bank -= bet;
		}
		else if(card_total > (theDealerCardsSum))
		{
			cout << Playersname << " Wins with " << card_total << endl;
			bank += 2*bet;
			return 1;
		}
		else if(card_total == (theDealerCardsSum))
		{
			cout << "Push at " << card_total << " For " << Playersname << endl;
		}
		else
		{
			cout << "Dealer Wins with " << (theDealerCardsSum) << " Over " << Playersname << endl;
			bank -= bet;
		}
	}
	return 0;
}
void Player:: Stay()
{
	//do nothing
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

void Player::Rule()
{
	cout<< "Your aim is to achieve a hand where all the cards add up as close as possible but do not exceed 21.";
	cout<< "\nAll face cards are worth 11 points. This includes jacks, queens and kings, regardless of suit.";
	cout<< "\nAn ace is worth either 1 or 10 depending on your strategy.";
	cout<< "\nCards 2 through 10 are their face value.";

	cout<< "\n\nAs the dealer gains more cards, they must draw on 16 and stand on all 17's.";
	cout<< "\nThen the player (YOU) can keep his/her hand as it is (stand) or take more cards from the";
	cout<< "\ndeck (hit), one at a time, until either the player judges that the hand is strong";
	cout<< "\nenough to go up against the dealer's hand and stands, or until it goes over 21, in";
	cout<< "\nwhich case the player immediately loses (busts).";

	cout<< "\n\nWhen all players have finished their actions, either decided to stand or busted, the dealer";
	cout<< "\nturns over his hidden hole card. If the dealer has a natural 21 (blackjack) with his two";
	cout<< "\ncards, he won't take any more cards. All players lose, except players who also have a";
	cout<< "\nblackjack, in which case it is a push - the bet is returned to the player.";
	cout<< "\nIf the dealer doesn't have a natural, he hits (takes more cards) or stands depending on the";
	cout<< "\nvalue of the hand. Contrary to the player, though, the dealer's action is completely dictated ";
	cout<< "\nby the rules. The dealer must hit if the value of the hand is lower than 17, otherwise the dealer ";
	cout<< "\nwill stand.";
	cout<< "In this game, the dealer will stand on a soft 17 (where there is an ace being counted for 10 points).";

	cout<< "\n\nIn this game, you can take as many cards as you want until you bust.";
	cout<< "This rule may not be the same in all playing environments.";

	//splitting and doubling down if we chose to allow gambling.
}




