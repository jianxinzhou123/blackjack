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
#include <vector>
#include<random>

using namespace std;

Deck::Deck(){
    string faces[] ={"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    string suits[] ={"H", "D", "C", "S"};
    int values[] = {10, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};
    CurrentCard = 0;
    for(int i = 0; i<CARDS_PER_DECK; i++){
        //deck[i] = Card(faces[i % 13], suits[i / 13], values[i % 13]);
        deck.push_back(Card(faces[i % 13], suits[i / 13], values[i % 13]));
    }
};

void Deck::printDeck(Deck &current) const{
    cout << left;
    int i =0;
    for (list<Card>::iterator it=current.deck.begin(); it !=current.deck.end(); it++)
    {
        cout  << setw(4) << (*it).printCard();
        if((i+1) % 7 == 0)
        {
            cout << endl;
        }
        i++;
    }
    
    cout << endl;
    
};

void Deck::shuffle(Deck &current){
    CurrentCard = 0;
    vector<Card> V(current.deck.begin(), current.deck.end());
    ::shuffle(V.begin(), V.end(), mt19937{std::random_device{}()});
    list<Card> shuffled_list {V.begin(), V.end()};
    current.deck.swap(shuffled_list);
}


void Deck::dealCard(Deck &current, Deck &player){
    
};


void Deck::PileOld(Deck &current, Deck &old, Card &oldCard){
    
    
};
    

