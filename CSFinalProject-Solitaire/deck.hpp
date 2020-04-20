//
//  deck.hpp
//  CSFinalProject-Solitaire
//
//  Created by Nick Smith on 4/20/20.
//  Copyright © 2020 Nicholas Smith & Matthew Malloy. All rights reserved.
//

#ifndef deck_hpp
#define deck_hpp

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
    //int value;
public:
    Card();
    Card(std::string cardsuit, std::string cardtype);
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
