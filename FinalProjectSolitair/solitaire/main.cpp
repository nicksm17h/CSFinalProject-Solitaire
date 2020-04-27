
//By Mathew Malloy and Nicholas Smith

/*Nicholas Smith:
 *  My duty was rto separate the project up into separatge files and implement the header files.
 * separating the files made the code itself alot more readable and alot more professional.
 * I also implemented alot of the game getter functions along with the playGame() function. the playGame()
 * function was somethign that took a little bit of thinking and forced me to think about all of the different variables
 * acting on the playGame() function of the Game class. I was alsop responsible for implementing the entire main file.
 * The main.cpp file is where i implemnted the displayMeue() function which displays the menue to the user and carries out the
 * functions of the different classes.
*/

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "deck.h"
#include "game.h"


using namespace std;




bool displayMenu(Deck, Game);



int main() {

    cout << "working\n";

    bool run = 1;

    Deck newDeck ;
    cout << "working1\n";

    vector<Card> newDeckOfCards = newDeck.getDeck();

   // for( int i = 0; i < newDeckOfCards.size(); i++){
  //      cout << "Card: " << newDeckOfCards[i].printCard()  << endl;
    //


     cout << "working2\n";
    Game newGame(newDeckOfCards);
    //newDeck.shuffleDeck();
      cout << "working\n";

   while(run){
        run = displayMenu(newDeck , newGame);
    }


 /*
    while(run){
         int userChoice;
         cout << "\nWelcome to Solitaire!\n";
         cout << "1) New Deck \n2) Display Deck \n3) Shuffle Deck \n4) Play Solitaire \n5) Exit\n";
        cout << "Please Enter choice: ";
         cin >> userChoice;




         switch(userChoice){
             case 1 :
                 //newDeck.shuffleDeck();
                 newDeck.displayDeck();
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
                 run = 0;
             case 5 :
                 run = 0;

         }
     }
*/








    return 0;
}

bool displayMenu(Deck newDeck, Game newGame){
    //Displayes Menue

    cout << "working2\n";

    int userChoice;
     cout << "\nWelcome to Solitaire!\n";
     cout << "1) New Deck \n2) Display Deck \n3) Shuffle Deck \n4) Play Solitaire \n5) Exit\n";
    cout << "Please Enter choice: ";
     cin >> userChoice;

    cout << "working 3\n";


     switch(userChoice){
         case 1 :
             //newDeck.shuffleDeck();
             newDeck.displayDeck();
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


//previous Main

/*
class card{
private:
    string suit;
    string type;
    //int value;
public:
    card();
    card(string cardsuit, string cardtype);
    string printCard();
};
card::card(){
}

card::card(string cardsuit, string cardtype){
    suit=cardsuit;
    type=cardtype;
    //value=cardvalue;
}
string card::printCard(){
    return (suit + " of  " + type);
}



class deck{
private:
    card *deckOfCards;
    card *cards;
public:
    deck();
    void printdeck();
    void shuffle();

};


deck::deck(){
    string type[]= {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    string suit[]= {"Hearts", "Diamonds", "Spades", "Clubs"};
    deckOfCards=new card[52];
    cards=new card [52];
    for(unsigned i=0; i<52 ;i++){
        deckOfCards[i]= card (type [i%13], suit [i/13]);
        cards[i]= card (type [i%13], suit [i/13]);
    }
}


void deck::printdeck(){
    int a=0;
    int b=13;
    int c=26;
    int d=39;
    for (int i=0; i<=12; i++){
        cout<<deckOfCards[a].printCard()<<"      "<<deckOfCards[b].printCard()<<"      "<<deckOfCards[c].printCard()<<"      "<<deckOfCards[d].printCard()<<endl;
        a=a+1;
        b=b+1;
        c=c+1;
        d=d+1;
    }
    cout<<endl<<endl<<endl;
}

void deck::shuffle(){
    srand (time(NULL));
    vector<int> check(52);
    int x=rand()%52;
    check.at(0)=x;
    deckOfCards[0]=cards[x];
    for(int i=1; i<52; i++){
        x=rand()%52;
        check.at(i)=x;
        int a =0;
        while(a<i){
            if(check.at(a)==x){
                a=0;
            }
        for(int k=0;k<i;k++){
            if (check.at(k)==x){
                x=rand()%52;
                check.at(i)=x;
            }
            else{deckOfCards[i]=cards[x];}

        }
        a++;
        }

    }
    printdeck();
}

*/
