//
//  main.cpp
//  Final Project
//
//  Created by Mwai Banda on 12/22/20.
//  Final Project - Tictactoe Game

#include <iostream>
#include "TicTacToe.hpp"
#include "Game.hpp"
#include "Player.hpp"

#define Log(x) std::cout << x
#define Input(x) !cin << x
#define Clearbuffer() cin.clear(); cin.ignore(100,'\n')

int getIntData(int var);

int main() {
    Game TicTacToe = Game({"X" ,1}, {"O", 2});
    TicTacToe.Start();

    bool  playerhasWon =  false;
    int turn = 1;
    int position = 0;
    
    while(!playerhasWon){
        
        switch (turn) {
            case 1:
                position = getIntData(position);
                TicTacToe.positionPlayerAt(position, TicTacToe.getPlayer1Symbol());
                TicTacToe.displayBoard();
                if (TicTacToe.CheckWin(TicTacToe.getPlayer1Symbol())){
                    Log("Player " << TicTacToe.getPlayer1ID() << " has won!" << endl);
                    return 0;
                }
                turn++;
                break;
            case 2:
                position = getIntData(position);
                TicTacToe.positionPlayerAt(position, TicTacToe.getPlayer2Symbol());
                TicTacToe.displayBoard();
                if (TicTacToe.CheckWin(TicTacToe.getPlayer2Symbol())){
                    Log("Player " << TicTacToe.getPlayer2ID() << " has won!" << endl);
                    return 0;
                }
                turn--;
                break;
        }
    }
    system("pause");
    return 0;
}

int getIntData( int var){
    bool success = false;
    char str[] = "ERROR: Invalid ingeter should non-negative and > 0.";
    char str2[] = "ERROR: Invalid enter interger.";

    
    do {
        try {
            Log("Enter position you want to play (1 - 9): ");
            cin >> var;
            if (var < 1) {
                throw str;
            }
            if (!cin) {
                throw str2;
            }
            success = true;
        } catch (const char* messageStr[]) {
            Log(messageStr << "" << "\n");
            cin.clear();
            cin.ignore(100,'\n');
            
        }
    } while (!success);
    
    
    return var;
}
