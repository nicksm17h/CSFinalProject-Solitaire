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
    int cardsLeft;
    int deckIndex = 0;


public:
    Game(std::vector<Card> deckOfCards);
    void playGame();
    int sumPile();
    bool checkPrime();
    void newPile();

};

#endif /* game_hpp */
