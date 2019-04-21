//
//  Deck.hpp
//  Blackjack
//
//  Created by Sam Zhou on 4/21/19.
//  Copyright © 2019 Sam Zhou. All rights reserved.
//

#ifndef Deck_hpp
#define Deck_hpp

#include "Cards.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>



using namespace std;

const int CARDS_PER_DECK = 52;

class Deck{
public:
    Deck();
    void shuffle();
    void printDeck() const;
    Card dealCard();
    
private:
    Card *deck;
    int CurrentCard;
    
    
    
    
};

#endif

