#ifndef GAME_H
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


public:
    Game();
    void playGame();
    void checkPrime(int pileSum);
    void newPile();
    void checkWin();

};

#endif /* game_hpp */
