#ifndef deck_h
#define deck_h

#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

/*
    This will be the class that is responsible for all functions pretaining to the deck of
    cards used in the game
 */

class Card{
private:
    std::string suit;
    std::string type;
    int value;
    //int value;
public:
    Card();
    Card(std::string cardsuit, std::string cardtype, int value);
    std::string printCard();
};

class Deck{
private:
    std::vector<Card> deckOfCards;
public:
    Deck();
    void displayDeck();
    void shuffleDeck();
};



#endif /* deck_hpp */
