/********************************************************************* 
** Author: Woohyuk Yang

** Date: March. 2nd. 2016

** Description: CS161 Module9_Assignment9_Project_Defining a class called "Board" for A tictactoe game
*********************************************************************/



#ifndef BOARD_HPP
#define BOARD_HPP
#include <iostream>

using namespace std;

enum Gamestate {X_WON, O_WON, DRAW, UNFINISHED};


class Board
{
    private:
        char arr[3][3];
    public: 
        Board();//initializing arr[3][3]
       bool makeMove(int x, int y, char Player); //accepts x, y coordinators, and who's turn
        Gamestate gameState();// deciding the situation. logic should be added. 
        void print();//just printing. This function should access the elements of array[3][3]

};

#endif
