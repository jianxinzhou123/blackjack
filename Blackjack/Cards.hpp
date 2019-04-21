//
//  Card.hpp
//  Blackjack
//
//  Created by Sam Zhou on 4/20/19.
//  Copyright © 2019 Sam Zhou. All rights reserved.
//

#ifndef Card_hpp
#define Card_hpp

#include <iostream>

using namespace std;


class Card{
public:
    Card();
    Card(string Face, string Suit, int Value);
    string printCard() const;

private:
    string Face;
    string Suit;
    int Value;
    
};


#endif /* Card_hpp */
