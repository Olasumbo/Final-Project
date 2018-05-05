# ECE-Final-Project- BlackJack

Introduction

This system will be able to be accessed by players who will be able to perform different tasks for each round of a game. The object of each round of the game will be for each player to get a as close as possible to or exactly equal to 21 to outbeat the dealer. The dealer will be able to score shuffle and deal out cards from a deck of 52 as well as be able to respond to each player. Each player will place a bet before the deal begins from their cash stash of $1000. After two cards are dealt to each player including the dealer himself, each player will have the option of either being able to hit, stay, double, or exit. If a player hits, the dealer provides the player with another card. If a player stays, the dealer will give the player another card and the player will wait to see how the dealer plays. If a player doubles down, they can increase their bet by the same amount against the dealer before the dealer gives the player the next card. If a player wins, they receive double their bet back. If a player loses, they lose what they bet. If there is a draw, the player receives their money back for that round. After the game for each player has finished with either a win or a loss for that round, the player will be able to either cash out which will end the game or keep playing the game until he or she is out of money. Standard rules apply for the values of the cards where cards 2 through 10 equal that number, jack, queen, and king all equal a value of 11, and the ace being a value of either 10 or 1.

                               Make file to compile the Program.
                  Call make on your command line and after everything compiles
                        Call \.game.exe to run the game.
all: FinalProject Card Deck Dealer System Player game

game: g++ FinalProject.o Card.o Deck.o Dealer.o System.o Player.o -o game -std=c++11

FinalProject: FinalProject.cpp g++ -c FinalProject.cpp -std=c++11

Card: Card.cpp Card.h g++ -c Card.cpp -std=c++11

Deck: Deck.cpp Deck.h g++ -c Deck.cpp -std=c++11

Dealer: Dealer.cpp Dealer.h g++ -c Dealer.cpp -std=c++11

System: System.cpp System.h g++ -c System.cpp -std=c++11

Player: Player.cpp Player.h g++ -c Player.cpp -std=c++11

clean: rm -rf *.o game