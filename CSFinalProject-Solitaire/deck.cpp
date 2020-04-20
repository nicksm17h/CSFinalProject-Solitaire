//
//  deck.cpp
//  CSFinalProject-Solitaire
//
//  Created by Nick Smith on 4/20/20.
//  Copyright © 2020 Nicholas Smith & Matthew Malloy. All rights reserved.
//

#include "deck.hpp"

using namespace std;

Card::Card(){
}

Card::Card(std::string cardsuit, std::string cardtype){
    suit=cardsuit;
    type=cardtype;
    //value=cardvalue;
}
std::string Card::printCard(Card card){
    return (card.suit + " of  " + card.type);
}


Deck::Deck(){
    string type[]= {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    string suit[]= {"Hearts", "Diamonds", "Spades", "Clubs"};
    for(unsigned i=0; i<52 ;i++){
        deckOfCards.push_back(Card(type[i%13], suit[i%4]));
    }
}

void Deck::printDeck(){
    for (int i=0; i<52; i++){
        cout << printCard(deckOfCards[i]) << endl;
    }
}


