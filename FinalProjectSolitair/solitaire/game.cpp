
#include <iostream>
#include "game.h"
#include "deck.h"

using namespace std;
Game:: Game(){
    int numPrimeDecks = 0;
    int pileSum = 0;
    int deckIndex = 1;
}

Game::Game(vector<Card> & adeckOfCards){
    vector<Card> pile = {deckOfCards[0]};
    vector<Card> deckOfCards;
    int numPrimeDecks = 0;
    int pileSum = 0;
    int deckIndex = 1;

}

int Game::getDeckIndex(){
        return deckIndex;
}

void Game::playGame(){
    bool game = 1;

    //poimnters
    pntrPdecks = &numPrimeDecks;
    pntrPS = &pileSum;
    dI = &deckIndex;

    while(game){
        char input;
        cout << "Cards Left: " << 52 - (deckIndex + 1)  << " The sum Of the Pile is: " << pileSum << " The number of Prime piles you have gone through thus far is: " << numPrimeDecks << endl << endl;
        //cout << "Cards Left: " << 52 - (*dI + 1)  << " The sum Of the Pile is: " << pntrPS << " The number of Prime piles you have gone through thus far is: " << pntrPdecks << endl << endl;
        //cout << "Cards Left: " << 52 - (*dI + 1)  << " The sum Of the Pile is: " << *pntrPS << " The number of Prime piles you have gone through thus far is: " << *pntrPdecks << endl << endl;
        cout << "Press enter to put down a new card  (or press Q to quit)";
        cin >> input;

        if (input == 'q' || input == 'Q'){
            exit(0);
        }
        else if (input=='n' || input=='N'){
            pile.push_back( deckOfCards[deckIndex] );
            sumPile(deckOfCards);
            checkPrime(deckOfCards);
        }



        if (deckIndex == 51 && checkPrime(deckOfCards) == 0){

                if (deckIndex == 51){
                        pile[deckIndex + 1] = deckOfCards[deckIndex + 1];

                        if(checkPrime(deckOfCards)){
                                cout << "You have won the game!" << endl;
                                exit(0);
                        }

                }
        }
    }
}

int Game::sumPile(vector<Card> deckOfCards){
    int pileSum = 0;
    for(unsigned int i = 0; i < pile.size(); i++){
            pileSum += deckOfCards.at(i).getValue();
    }

    return pileSum;

}

bool Game::checkPrime(vector<Card> deckOfCards){
        //returns true if the sum of the pile is a prime number.
        //else it returns false
    vector<int>primeNumber={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337};
    for (unsigned i=0;i < primeNumber.size(); i++){
        if (sumPile(deckOfCards) ==primeNumber[i]){
            return true;
        }
        else{
            return false;
        }
    }
}
void Game::newPile(vector<Card> pile, int & deckIndex, int & numPrimeDecks){
        pile.clear();
        deckIndex = 0;
        numPrimeDecks += 1;
}


