
#include <iostream>
#include "game.h"
#include "deck.h"

using namespace std;

Game::Game(vector<Card> deckOfCards){
private:
    vector<Card> pile = {deckOfCards[0];
    int numPrimeDecks;
    int pileSum;
    int cardsLeft;
    int deckIndex = 1;
}

void Game::playGame(){
    bool game = 1;

    while(game){
        cout << "Cards Left: " << cardsLeft << " The sum Of the Pile is: " << pileSum << " The number of Prime piles you have gone through thus far is: " << numPrimeDecks << endl << endl;
        cout << "Press enter to put down a new card  (or press Q to quit)";
        cin >> char input;

        if (input == 'q' || input == 'Q'){
            exit(0);
        }

        pile.pushBack(deckOfCards[deckIndex]);

    }
}

                        int sumPile(){

}

bool Game::checkPrime(){
        //returns true if the sum of the pile is a prime number.
        //else it returns false

}
void newPile(){
        pile.clear();
        deckIndex =0;
        numPrimeDecks += 1;
}
bool checkWin(){

}

