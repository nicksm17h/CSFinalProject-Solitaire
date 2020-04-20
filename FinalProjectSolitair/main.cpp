#include <iostream>
#include <string>
#include <vector>

using namespace std;

class deck{
private:
    deck();
    void createdeck();
};

deck::deck(){
    string type[]= {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    string suit[]= {"Hearts", "Diamonds", "Spades", "Clubs"};
}

void deck::createdeck(){
    for(int i=0)
}





















class card{
private:
    string suit;
    string type;
    int value;
public:
    card();
    card(string cardsuit, string cardtype, int cardvalue);

};
card::card(){
}

card::card(string cardsuit, string cardtype, int cardvalue){
    suit=cardsuit;
    type=cardtype;
    value=cardvalue;
}

int main()
{

}
