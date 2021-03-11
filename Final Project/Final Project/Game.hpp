//
//  Game.hpp
//  Final Project
//
//  Created by Mwai Banda on 12/22/20.
//  Game.hpp

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <iostream>
#include "Player.hpp"
#include "TicTacToe.hpp"


using namespace std;

class Game: public TicTacToe {
public:
    Game(const Player &player1, const Player &player2);
    void Start();
    void positionPlayerAt(int position, string playerSymbol);
    int getPlayer1ID() const;
    string getPlayer1Symbol() const;
    int getPlayer2ID() const;
    string getPlayer2Symbol() const;

private:
    Player player1;
    Player player2;
};

#endif /* Game_hpp */
