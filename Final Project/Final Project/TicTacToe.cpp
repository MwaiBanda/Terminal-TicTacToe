//
//  TicTacToe.cpp
//  Final Project
//
//  Created by Mwai Banda on 12/22/20.
//  TicTacToe

#include "TicTacToe.hpp"
#include <iostream>
#include <exception>


using namespace std;
TicTacToe::TicTacToe() : board{
    {" " , "   |  ", " ", "  |  ", " ", ""},
    {"-" , " - | - ", "", "- | - ", "-", " "},
    {" " , "   |  ", " ", "  |  ", " ", ""},
    {"-" , " - | - ", "", "- | - ", "-", " "},
    {" " , "   |  ", " ", "  |  ", " ", ""}} {
        
    }


void TicTacToe:: displayBoard(){
    cout << endl;
    
    for (auto &row : board){
        for (auto &col : row)
            cout << col;
        cout << endl;
    }
    cout << endl;
}


void TicTacToe::playAt(int position, string playerSymbol) {
    switch (position) {
        case 1:
            if (board[0][0] != " "){
                throw "Player already in position";
            } else {
                board[0][0] = playerSymbol;
            }
            break;
        case 2:
            if (board[0][2] != " "){
                throw "Player already in position";
            } else {
                board[0][2] = playerSymbol;
            }
            break;
        case 3:
            if (board[0][4] != " "){
                throw "Player already in position";
            } else {
                board[0][4] = playerSymbol;
            }
            break;
        case 4:
            if (board[2][0] != " "){
                throw "Player already in position";
            } else {
                board[2][0] = playerSymbol;
            }
            break;
        case 5:
            if (board[2][2] != " "){
                throw "Player already in position";
            } else {
                board[2][2] = playerSymbol;
            }
            break;
        case 6:
            if (board[2][4] != " "){
                throw "Player already in position";
            } else {
                board[2][4] = playerSymbol;
            }
            break;
        case 7:
            if (board[4][0] != " "){
                throw "Player already in position";
            } else {
                board[4][0] = playerSymbol;
            }
            break;
        case 8:
            if (board[4][2] != " "){
                throw "Player already in position";
            } else {
                board[4][2] = playerSymbol;
            }
            break;
        case 9:
            if ( board[4][4] != " "){
                throw "Player already in position";
            } else {
                board[4][4] = playerSymbol;
            }
            break;
    }
}

bool TicTacToe::CheckWin(string playerSymbol){
    bool win = false;
    int index = 0;
    int count = 0;
    // right diagonal
    while (index < 5){
        switch (index) {
            case 0:
                if (board[0][0] == playerSymbol) {
                    count++;
                    if (count == 3) {
                        win = true;
                        return win;
                    } else {
                        win = false;
                    }
                }
                break;
                
            case 2:
                if(board[2][2] == playerSymbol){
                    count++;
                    if (count == 3) {
                        win = true;
                        return win;
                    } else {
                        win = false;
                    }
                }
                break;
            case 4:
                if (board[4][4] == playerSymbol){
                    count++;
                    if (count == 3) {
                        win = true;
                        return win;
                    } else {
                        win = false;
                    }
                }
                
                break;
            default:
                break;
        }
        index++;
    }
    
    // Reset
    index = 0;
    count = 0;
    
    // left diagonal
    while (index < 5){
        switch (index) {
            case 0:
                if (board[0][4] == playerSymbol) {
                    count++;
                    if (count == 3) {
                        win = true;
                        return win;
                    } else {
                        win = false;
                    }
                }
                break;
                
            case 2:
                if(board[2][2] == playerSymbol){
                    count++;
                    if (count == 3) {
                        win = true;
                        return win;
                    } else {
                        win = false;
                    }
                }
                break;
            case 4:
                if (board[4][0] == playerSymbol){
                    count++;
                    if (count == 3) {
                        win = true;
                        return win;
                    } else {
                        win = false;
                    }
                }
                
                break;
            default:
                break;
        }
        index++;
    }
    
    index = 0;
    count = 0;
    int rowCount = 0;
    cout << endl;
    
    // Go through Columns
    for (int  j = 0; j < 7; j++){
        for (int  i = 0; i < 5; i++){
            if (board[i][j] ==  playerSymbol) {
                rowCount++;
                if (rowCount == 3) {
                    win = true;
                    rowCount = 0;
                    return win;
                    
                } else {
                    win = false;
                }
            }
        }
            
            count = 0;
        }
        cout << endl;
        
        // Each Row
        for (int j = 0; j < 5; j++) {
            rowCount = 0;
            for (int  i = 0; i < 7; i++){
                if (board[j][i] ==  playerSymbol) {
                    rowCount++;
                    if (rowCount == 3) {
                        win = true;
                        rowCount = 0;
                        return win;
                        
                    } else {
                        win = false;
                    }
                }
            }
           
        }
    
        
        return win;
        
    }
    
    
