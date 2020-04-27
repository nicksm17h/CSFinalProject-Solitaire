

#include <iostream>
#include <iomanip>
#include <vector>
#include "deck.h"


using namespace std;

Card::Card(){
};

Card::Card(string cardsuit, string cardtype, int value){
    suit=cardsuit;
    type=cardtype;
    Value= value;
}

int Card::getValue(){
        return Value;
}

string Card::printCard(){
    return (type + " of  " + suit );
}

Deck::Deck(){
    string type[]= {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    string suit[]= {"Hearts", "Diamonds", "Spades", "Clubs"};
    for(unsigned i=0; i<52 ;i++){
        Card newCard(suit[i/13], type[i%13], i%13);
        deckOfCards.push_back(newCard);
        ghost.push_back(newCard);
    }
}

vector <Card> Deck::getDeck(){
    vector<Card>deckofcards;
    for (unsigned i=0;i<deckOfCards.size();i++){
        deckofcards.push_back(deckOfCards.at(i));
    }
    return deckofcards;
}

void Deck::displayDeck(){
    /*
    for (int i=0; i<52; i++){
        cout << i << ")" << deckOfCards[i].printCard() << endl;
    }
     */
    int a=0;
    int b=13;
    int c=26;
    int d=39;
    for (int i=0; i<=12; i++){
        cout << setw(10) << deckOfCards[a].printCard() << "\t\t" << setw(10) << deckOfCards[b].printCard() << "\t\t" << setw(10) << deckOfCards[c].printCard() << "\t\t" << setw(10) << deckOfCards[d].printCard() << endl;
        a=a+1;
        b=b+1;
        c=c+1;
        d=d+1;
    }
    cout<<endl<<endl<<endl;
}

void Deck::shuffleDeck(){
    //random_shuffle(deckOfCards.begin(), deckOfCards.end());


    srand (time(NULL));
    vector<int> check(52);
    int x = rand()%52;
    check.at(0) = x;
    deckOfCards.at(0) = ghost.at(x);
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
            else{deckOfCards[i] = ghost.at(x);

            }

        }
        a++;
        }
    }

}

