//
//  deck.cpp
//  CSFinalProject-Solitaire
//
//  Created by Nick Smith on 4/20/20.
//  Copyright © 2020 Nicholas Smith & Matthew Malloy. All rights reserved.
//

#include <iostream>
#include "deck.hpp"


using namespace std;

Card::Card(){
}

Card::Card(std::string cardsuit, std::string cardtype){
    suit=cardsuit;
    type=cardtype;
    //value=cardvalue;
}

string Card::printCard(){
    return (type + " of  " + suit );
}


Deck::Deck(){
    string type[]= {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    string suit[]= {"Hearts", "Diamonds", "Spades", "Clubs"};
    for(unsigned i=0; i<52 ;i++){
        Card newCard(suit[i%4], type[i%13]);
        deckOfCards.push_back(newCard);
    }
}

void Deck::printDeck(){
    for (int i=0; i<52; i++){
        cout << deckOfCards[i].printCard() << endl;
    }
}


