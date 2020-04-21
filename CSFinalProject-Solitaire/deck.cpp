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
        Card newCard(suit[i/13], type[i%13]);
        deckOfCards.push_back(newCard);
    }
}

void Deck::displayDeck(){
    for (int i=0; i<52; i++){
        cout << i << ")" << deckOfCards[i].printCard() << endl;
    }
}

void Deck::shuffleDeck(){
    random_shuffle(deckOfCards.begin(), deckOfCards.end());
    
    /*
    srand (time(NULL));
    vector<int> check(52);
    int x = rand()%52;
    check.at(0) = x;
    deckOfCards[0] = cards[x];
    for(int i=1; i<52; i++){
        x = rand()%52;
        check.at(i) = x;
        int a = 0;
        while(a < i){
            if(check.at(a) == x){
                a=0;
            }
        for(int k = 0; k < i; k++){
            if (check.at(k) == x){
                x = rand()%52;
                check.at(i) = x;
            }
            else{deckOfCards[i] = cards[x];
                
            }

        }
        a++;
        }
    }
     */
}

