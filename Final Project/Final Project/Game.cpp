//
//  Game.cpp
//  Final Project
//
//  Created by Mwai Banda on 12/22/20.
//  Game.cpp

#include "Game.hpp"
#define Clearbuffer() cin.clear(); cin.ignore(100,'\n')


using namespace std;

Game::Game(const Player &player1, const Player &player2): TicTacToe(), player1{player1}, player2{player2} {
}

void Game::positionPlayerAt(int position, string playerSymbol){
        try {
            Game::playAt(position,  playerSymbol);
            Clearbuffer();
        } catch (const char* messageStr) {
            cout << messageStr << endl;
        }
}

int Game::getPlayer1ID () const { return player1.getplayerID(); }
string Game::getPlayer1Symbol() const { return player1.getPlayerSymbol(); }
int Game::getPlayer2ID() const { return player2.getplayerID(); }
string Game::getPlayer2Symbol() const { return player2.getPlayerSymbol(); }


void Game::Start(){
    Game::displayBoard();
}
