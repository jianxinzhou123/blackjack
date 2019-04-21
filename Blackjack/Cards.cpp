//
//  Card.cpp
//  Blackjack
//
//  Created by Sam Zhou on 4/20/19.
//  Copyright © 2019 Sam Zhou. All rights reserved.
//

#include "Cards.hpp"
#include <iostream>


using namespace std;

Card::Card(){
    
    
}


Card::Card(string Face, string Suit, int Value){
    this->Face = Face;
    this->Suit = Suit;
    this->Value = Value;
}

string Card::printCard() const{

    return (Suit + Face);
}



