#ifndef GME_H
#define GAME_H

#include <stdio.h>
#include <vector>
#include "deck.h"

class Game{

private:
    //Add private members of the Game Class here
    std::vector<Card> pile;
    int numPrimeDecks;
    int pileSum;
    int deckIndex;


public:
    Game(std::vector<Card> deckOfCards);
    int getDeckIndex();
    int sumPile(std::vector<Card> deckOfCards);
    void playGame(std::vector<Card> deckOfCards);
    bool checkPrime(std::vector<Card> deckOfCards);
    void newPile(std::vector<Card> pile,  int & deckIndex, int & numPrimeDecks);

};

#endif /* game_hpp */
