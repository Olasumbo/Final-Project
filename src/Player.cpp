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
	bank = 1000.00;
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
		cin.clear();
		cout << "Current balance For " << Playersname << " is " << bank << endl;
		cout<<"How much would you like to bet? Enter amount now: ";
		cin >> bet;
		if( bet == 0 )
		{
			cout << "You must bet to play" << endl;
		}
		else if( bet > bank )
		{
			cout << "You cannot bet more money than you have" << endl;
			bet = 0;
		}
		else if( bet < 0 )
		{
			cout << "You cannot bet a negative amount" << endl;
			bet = 0;
		}
	} while(bet == 0);
}

vector<Card*> Player::gethand()
{
	return hand;
}

char Player::choice( Deck * theDeck )
{
	//cout << "There are " << theDeck.getDeck().size() << " cards in the deck" << endl;
	bool invalid_choice = false;
	do
	{
		cout << "Hit, Stay, Double, or Exit?" << endl;
		cout << "Press H to get a card\nPress S to Stay\nPress D to Double\nE for Exit" << endl;
		char c = ' ';
		cin >> c;
		switch(c)
		{
		case 'H':
		case 'h':
		{
			cout << "Hitting!!" << endl;
			Hit( theDeck ); // This passes the deck into the function
			invalid_choice = false;
			break;
		}
		case 'S':
		case 's':
		{
			Stay();
			invalid_choice = false;
			break;
		}
		case 'D':
		case 'd':
		{
			Double(); // if the player wants to
			invalid_choice = false;
			break;
		}
		case 'E':
		case 'e':
		{
			exit(EXIT_SUCCESS);
			break;
		}
		default:
			invalid_choice = true;
			cout << "Invalid Selection. Please try Again." << endl;
		}
	}while(invalid_choice);
	return 0;
}

void Player:: Hit( Deck * theDeck )
{
	cout << "About to get hit" << endl;

	//Deal 1 card at a time to player or system
	int x;
	x = rand() % 52;

	//cout << "Random number: " << x << endl;
	//cout << "Random card: " << theDeck.getDeck()[x]->getNiceName() << endl;
	//Card *trial = new Card(theDeck->getDeck()[x]->getValue(), theDeck->getDeck()[x]->getsuite());
	//hand.push_back( theDeck->getDeck()[x] );
	//hand.push_back(trial );
	addToHand( theDeck->getDeck()[x]->getValue(), theDeck->getDeck()[x]->getsuite() );


	//cout << "Deleting Card" << endl;
	//delete theDeck->getDeck()[x];
	//theDeck->getDeck().erase( theDeck->getDeck().begin() + x, theDeck->getDeck().begin() + x );

	cout << "You got hit with the " << hand[hand.size() - 1]->getNiceName() << endl;

	//move( theDeck.getDeck().begin(), theDeck.getDeck().begin() + x, hand.begin() + 1 );

}

int Player::CheckBust( int dealer_tot )
{

	if( getHandTotal() > 21 )
	{
		cout << Playersname << " busts with " << getHandTotal() << endl;
		return 1;
	}
	else if( dealer_tot > 21 )
	{
		cout << "The Dealer busts with " << dealer_tot << endl;
		return 1;
	}

}

int Player::CheckWin(int theDealerCardsSum)
{
	// Check to see if the dealer's hand is > 21
	if((theDealerCardsSum) > 21)
	{										//Dealer bust conditions
		cout << "Dealer Busts with " << (theDealerCardsSum) << endl;
		if( getHandTotal() > 21)
		{
			cout << Playersname <<" Busts with " << getHandTotal() << endl;
			cout << "You both Busted"<< endl;
			bank -= bet;
		}
		else
		{
			cout << Playersname << " Wins because the dealer busted!" << endl;
			bank += 2*bet;
			cout << Playersname << " made $" << bank << endl;
		}
	}
	else if((theDealerCardsSum) == 21)
	{									//Dealer 21 conditions
		if(getHandTotal() > 21)
		{
			cout << Playersname << " Busts with " << getHandTotal() << endl;
			cout << "Dealer Wins with a BLACKJACK Over " << Playersname << endl;
			bank -= bet;
		}
		else if(getHandTotal() == 21)
		{
			cout << "Dealer has BLACKJACK with " << Playersname << endl;
			cout << "Everyone's a winner (or loser) " << endl;
		}
		else
		{
			cout << "Dealer Wins with BlackJack Over " << Playersname << endl;
			bank -= bet;
		}
	}
	else
	{													//Dealer under 21 Conditions
		if(getHandTotal() > 21)
		{
			cout << Playersname << " Busts with " << getHandTotal() << endl;
			cout << "Dealer Wins Over " << Playersname << endl;
			bank -= bet;
		}
		else if(getHandTotal() > (theDealerCardsSum))
		{
			cout << Playersname << " Wins with " << getHandTotal() << endl;
			bank += 2*bet;
		}
		else if(getHandTotal() == (theDealerCardsSum))
		{
			cout << "Push at " << getHandTotal() << " For " << Playersname << endl;
			cout << "Everyone's a winner (or loser), but mostly you because computer's don't feel.  " << endl;
		}
		else
		{
			cout << "Dealer Wins with " << (theDealerCardsSum) << " Over " << Playersname << endl;
			bank -= bet;
		}
	}
	cout << "Player Hand: " << getHandTotal() << endl;
	cout << "Dealer Hand: " << theDealerCardsSum << endl << endl;
	return 0;
}
void Player:: Stay()
{
	gameOver = 1;
}
void Player:: Double()
{
	//Double at anytime
	double balance;
	if(bet > 500)
	{
		cout<<"You cannot double you bet because you don't have enough fund" << endl;
		Stay();
	}
	else
	{
		bet = ( bet * 2 );
		balance = bank - bet;
		cout << "You double you bet to "<< bet << endl;
		cout << "Money Left in bank = "<< balance << endl;
	}
}

void Player::Rule()
{
	cout<< "Your aim is to achieve a hand where all the cards add up as close as possible but do not exceed 21.";
	cout<< "\nAll face cards are worth 11 points. This includes jacks, queens and kings, regardless of suit.";
	cout<< "\nAn ace is worth either 1 or 10 depending on your strategy.";
	cout<< "\nCards 2 through 10 are their face value.";

	cout<< "\nThen the player (YOU) can keep his/her hand as it is (stay) or take more cards from the";
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

}




