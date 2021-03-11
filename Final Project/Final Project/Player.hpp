//
//  Player.hpp
//  Final Project
//
//  Created by Mwai Banda on 12/22/20.
//  Player 

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <iostream>

using namespace::std;

class Player{
public:
    string getPlayerSymbol() const;
    int getplayerID() const;
    Player(string symbol, int ID);
private:
    string symbolName;
    int playerID;
};
#endif /* Player_hpp */
