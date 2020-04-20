#include <iostream>
#include <string>
#include <vector>

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
    //deck();
    card *deckOfCards;
public:
    void printdeck();
    deck();
};

deck::deck(){
    string type[]= {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    string suit[]= {"Hearts", "Diamonds", "Spades", "Clubs"};
    deckOfCards=new card[52];
    for(unsigned i=0; i<52 ;i++){
        deckOfCards[i]= card (type [i%13], suit [i/13]);
    }
}

void deck::printdeck(){
    for (int i=0; i<52; i++){
        cout<<deckOfCards[i].printCard()<<endl;
    }
}























int main(){
deck deckOfCards;
deckOfCards.printdeck();
}
