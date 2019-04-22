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
#include <list>

using namespace std;

const int CARDS_PER_DECK = 52;

class Deck{
public:
    Deck();
    void shuffle(Deck &current);
    void printDeck(Deck &current) const;
    void dealCard(Deck &current, Deck &player);
    void PileOld(Deck &current, Deck &old, Card &oldCard);
    
private:
    list<Card> deck;
    int CardCounter = 0;
    int CurrentCard = 0;
    int oldCardCounter = 0;
    
};

#endif

