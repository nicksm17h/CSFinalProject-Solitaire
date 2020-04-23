
#include <iostream>
#include "game.h"
#include "deck.h"

using namespace std;

Game::Game(){
}

void Game::playGame(){
    bool game = 1;

    while(game){
        cout << "Cards Left: " << cardsLeft << " The sum Of the Pile is: " << pileSum << " The number of Prime piles you have gone through thus far is: " << numPrimeDecks << endl << endl;




    }
}

void Game::checkPrime(int pileSum){


}
void newPile(std::vector<Card> pile, int & numPrimeDecks){
        pile.clear();
        numPrimeDecks += 1;
}
bool checkWin(){

}

