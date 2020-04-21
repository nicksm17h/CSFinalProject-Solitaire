//
//  main.cpp
//  CSFinalProject-Solitaire
//
//  Created by Nick Smith on 4/20/20.
//  Copyright © 2020 Nicholas Smith & Matthew Malloy. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include "deck.hpp"
#include "game.hpp"

using namespace std;


bool displayMenu(Deck &, Game &);



int main(int argc, const char * argv[]) {

    bool run = 1;
    
    Deck newDeck;
    Game newGame;
    newDeck.shuffleDeck();
    
    
    
    while(run){
        run = displayMenu(newDeck, newGame);
    }
    
    
    
    
    
    
    
    
    
    return 0;
}

bool displayMenu(Deck & newDeck, Game & newGame){
    //Displayes Menue
    
    
    
    int userChoice;
     cout << "\nWelcome to Solitaire!\n";
     cout << "1) New Deck \n2) Display Deck \n3) Shuffle Deck \n4) Play Solitaire \n5) Exit\n";
    cout << "Please Enter choice: ";
     cin >> userChoice;
    
     
     
     
     switch(userChoice){
         case 1 :
             newDeck.shuffleDeck();
             break;
         case 2 :
             newDeck.shuffleDeck();
             newDeck.displayDeck();
             break;
         case 3 :
             newDeck.shuffleDeck();
             break;
         case 4 :
             newGame.playGame();
             return 0;
         case 5 :
             return 0;
         
     }
    return 1;
}
