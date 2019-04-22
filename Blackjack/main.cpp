//
//  main.cpp
//  Blackjack
//
//  Created by Sam Zhou on 4/20/19.
//  Copyright © 2019 Sam Zhou. All rights reserved.
//

#include <iostream>
#include "Cards.hpp"
#include "Deck.hpp"

int main(int argc, const char * argv[]) {
    Deck game_deck;
    Deck old_deck;
    Deck player_hand;
    
    cout << "Welcome to Sam's BlackJack!\n\nHere's your deck:\n";
    game_deck.shuffle(game_deck);
    game_deck.printDeck(game_deck);
    
    cout << endl;

    return 0;
}

/*Recap.
 string testString = "test string!";
 string * myPtr;
 
 myPtr = &testString;
 *myPtr = "hi";
 
 cout << testString << endl;
 
 */
