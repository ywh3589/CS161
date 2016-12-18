/********************************************************************* 
** Author: Woohyuk Yang

** Date: March. 2nd. 2016

** Description: CS161 Module9_Assignment9_Project_Defining a class called "TicTacToe" for a tictactoe game
*********************************************************************/



#ifndef TICTACTOE_HPP 
#define TICTACTOE_HPP
#include "Board.hpp"
#include <iostream>

using namespace std;

class TicTacToe
{
    private:
        Board board;
        char firstPlayer; // a field to keep track of which player's turn it is.
    public:
       // enum playersTurn {'x', 'o'}; // a field to keep track of which player's turn it is.
        TicTacToe(char player);
        void play(); //  that starts the game, looping untill someone wins or draw as indicated by gameState

};
#endif
