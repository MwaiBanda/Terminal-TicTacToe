//
//  Player.cpp
//  Final Project
//
//  Created by Mwai Banda on 12/22/20.
//  Player

#include "Player.hpp"
string Player::getPlayerSymbol() const{
    return symbolName;
}
int Player::getplayerID() const{
    return playerID;
}
Player::Player(string symbol, int ID){  
    this->symbolName = symbol;
    this->playerID = ID;
}
