//
//  game.cpp
//  CSFinalProject-Solitaire
//
//  Created by Nick Smith on 4/20/20.
//  Copyright © 2020 Nicholas Smith & Matthew Malloy. All rights reserved.
//
#include <iostream>
#include "game.hpp"
#include "deck.hpp"

using namespace std;

Game::Game(){
}

void Game::playGame(){
    
}

void Game::displayMenu(){
    int userChoice;
    cout << "Welcome to Solitaire!\n";
    cout << "1) New Deck \n2) Display Deck \n3) Shuffle Deck \n4) Play Solitaire \n5) Exit\n";
    cin >> userChoice;
   
    Deck newDeck;
    Game newGame;
    
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
            break;
        case 5 :
            exit(0);
        
    }
    
}
