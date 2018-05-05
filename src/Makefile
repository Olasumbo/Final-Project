all: FinalProject Card Deck Dealer System Player game

game:
	g++ FinalProject.o Card.o Deck.o Dealer.o System.o Player.o -o game -std=c++11

FinalProject: FinalProject.cpp 
		g++ -c FinalProject.cpp -std=c++11

Card: Card.cpp Card.h
	g++ -c Card.cpp -std=c++11

Deck: Deck.cpp Deck.h
	g++ -c Deck.cpp -std=c++11

Dealer: Dealer.cpp Dealer.h
	g++ -c Dealer.cpp -std=c++11
 
System: System.cpp System.h
	g++ -c System.cpp -std=c++11
 
Player: Player.cpp Player.h
	g++ -c Player.cpp -std=c++11

clean:
	rm -rf *.o game 