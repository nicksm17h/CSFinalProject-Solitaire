//
//  game.hpp
//  CSFinalProject-Solitaire
//
//  Created by Nick Smith on 4/20/20.
//  Copyright © 2020 Nicholas Smith & Matthew Malloy. All rights reserved.
//

#ifndef game_hpp
#define game_hpp

#include <stdio.h>
#include <vector>
#include "deck.hpp"

class Game{
    
private:
    //Add private members of the Game Class here
    std::vector<Card> pile;
    int numPrimeDecks;
    int pileSum;
    
    
public:
    Game();
    void playGame();
    void checkPrime(int pileSum);
    void newPile();
    void checkWin();
    
};

#endif /* game_hpp */
