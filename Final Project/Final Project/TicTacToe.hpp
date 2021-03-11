//
//  TicTacToe.hpp
//  Final Project
//
//  Created by Mwai Banda on 12/22/20.
//  TicTacToe 

#ifndef TicTacToe_hpp
#define TicTacToe_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class TicTacToe {
    static const int rows = 5;
    static const int columns = 7;
public:
    void displayBoard();
    void playAt(int postion, string playerSymbol);
    bool CheckWin(string playerSymbol);
    TicTacToe();
private:
    int numberOfElements;
    string board[rows][columns]; 
};
#endif /* TicTacToe_hpp */
