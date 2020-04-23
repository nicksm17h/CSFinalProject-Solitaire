#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;



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



int main(){
deck deckOfCards;
deckOfCards.printdeck();
deckOfCards.shuffle();
}