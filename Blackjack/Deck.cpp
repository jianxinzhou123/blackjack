//
//  Deck.cpp
//  Blackjack
//
//  Created by Sam Zhou on 4/21/19.
//  Copyright © 2019 Sam Zhou. All rights reserved.
//


#include "Deck.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

Deck::Deck(){
    string faces[] ={"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    string suits[] ={"H", "D", "C", "S"};
    int values[] = {10, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};
    deck = new Card[CARDS_PER_DECK];
    CurrentCard = 0;
    for(int i = 0; i<CARDS_PER_DECK; i++){
        deck[i] = Card(faces[i % 13], suits[i / 13], values[i%13]);
    }
    
    printDeck();
    
};

void Deck::printDeck() const{
    cout << left;
    for (int i = 0; i< CARDS_PER_DECK; i++)
    {
        cout  << setw(3) << deck[i].printCard() << " ";
    }
    
    cout << endl;
    
};
    
    

