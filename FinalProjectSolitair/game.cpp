
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
        sumPile();
        checkPrime();

<<<<<<< HEAD
        if (deckIndex == 51 && checkPrime() == 0){
                if(checkWin()){
                        cout << "You have won the game!" << endl;
                        exit(0);
                }
=======
        if (deckIndex == 51){
                checkWin();
>>>>>>> 0ff1c4e8fdd0f30206b30b5408645d51147b1407
        }
    }
}

int Game::sumPile(){
    int pileSum = 0;
    for(int i = 0; i < pile.size(), i++){
            pileSum += pile[i];
    }

    return pileSum;

}

bool Game::checkPrime(){
        //returns true if the sum of the pile is a prime number.
        //else it returns false
    vector<int>primeNumber={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337};
    for (int i=0;i<primeNumber,size()i++){
        if (sumpile()==primeNumber[i]){
            return true;
        }
        else{
            return false;
        }
    }
}
void newPile(){
        pile.clear();
        deckIndex =0;
        numPrimeDecks += 1;
}
bool checkWin(){
<<<<<<< HEAD
        vector <cards> winVector;

       for(int i = 0; i  deckOfCards; i++){
            winVector[i] = deckOfCards
       }

        if(checkPrime(sumPile(deckIndex[]}))){
=======
>>>>>>> 0ff1c4e8fdd0f30206b30b5408645d51147b1407

}

