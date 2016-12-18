#include "Board.hpp"
/********************************************************************* 

** Author: Woohyuk Yang

** Date: March. 2nd. 2016

** Description: CS161 Module9_Assignment9_Project_member function implementation for the "Board" class.

*********************************************************************/

#include <iostream>

using namespace std;


/********************************************************************* 
** Description:

** The constructor for class "Board" initializing each element of the array to '.' 
*********************************************************************/ 

Board::Board()
{
    
    for(int i = 0; i < 3; i++)
       {
        for(int j = 0; j < 3; j++)
          { arr[i][j] = '.';}
        }
    
}


/********************************************************************* 
** Description:

** The function "makeMove" which takes the x and y of the move and whose turn it is. If that coordinate input by a player is occupied it returns false while it is not occupied, it returns true and store a mark('x' or 'o') of the player at that coordinate.
*********************************************************************/
bool Board::makeMove(int x, int y, char player)
 {
        if(arr[x][y] == '.')
        {
            arr[x][y] = player;
             return true;
        }
        else
            cout << "That square is already taken" << endl;
            return false;
 }


/********************************************************************* 
** Description:

** The function which prints the current board situation.
*********************************************************************/

void Board::print()
  {
    cout << " " << " " << "0" << " " << "1" << " " << "2" << endl;
    cout << "0" << " " << arr[0][0] << " " << arr[0][1] << " " << arr[0][2] << endl;
    cout << "1" << " " << arr[1][0] << " " << arr[1][1] << " " << arr[1][2] << endl;
    cout << "2" << " " << arr[2][0] << " " << arr[2][1] << " " << arr[2][2] << endl;

    
    }


/********************************************************************* 
** Description:

** The function which takes no parameter and returns the result of the tictactoe game like X_WON, O_WON, DRAW, UNFINISHED.
*********************************************************************/
Gamestate Board::gameState() //which takes no parameter.
{
   
   
#if 0
    //Check vertical and horizontal
    for (int x = 0; x < 3; x++)
    {
        if (arr[x][0] == 'x' && arr[x][1] == 'x' && arr[x][2] == 'x')
		{
		   	cout << "The winner is x." << endl << endl;
			return X_WON;
		}
			if (arr[0][x] == 'x' && arr[1][x] == 'x' && arr[2][x] == 'x')
			{   cout << "The winner is x." << endl << endl;
		   	return X_WON;}
    }

    //Check diagonal
    if (arr[0][0] == 'x' && arr[1][1] == 'x' && arr[2][2] == 'x')
	{ cout << "The winner is x." << endl << endl;
	   	return X_WON;}
    if (arr[2][0] == 'x' && arr[1][1] == 'x' && arr[0][2] == 'x')
	{cout << "The winner is x." << endl << endl;
	   	return X_WON;}

  

       for (int o = 0; o < 3; o++)
    {
        if (arr[o][0] == 'o' && arr[o][1] == 'o' && arr[o][2] == 'o')
		{ cout << "The winner is o" << endl << endl;	
		   	return O_WON;}
        if (arr[0][o] == 'o' && arr[1][o] == 'o' && arr[2][o] == 'o')
		{ cout << "The winner is o" << endl << endl;	
			return O_WON;}
    }

    //Check diagonal
    if (arr[0][0] == 'o' && arr[1][1] == 'o' && arr[2][2] == 'o')
	{ cout << "The winner is o" << endl << endl;	
		return O_WON;}
    if (arr[2][0] == 'o' && arr[1][1] == 'o' && arr[0][2] == 'o')
	{ cout << "The winner is o" << endl << endl;	
		return O_WON;}
	

  if( (arr[0][0] != '.') && (arr[0][1] != '.') && (arr[0][2] != '.') && (arr[1][0] != '.') && (arr[1][1] != '.') && (arr[1][2] != '.') && (arr[2][0] != '.') && (arr[2][1] != '.') && (arr[2][2] != '.'))	{return DRAW;}

}


#endif



#if 1
//	Gamestate gamestate;
	
    if( (arr[0][0] =='x' || arr[0][0] == 'o') && (arr[0][1] == 'x' || arr[0][1] == 'o') && (arr[0][2] == 'x' || arr[0][2] == 'o') && (arr[1][0] == 'x' || arr[1][0] == 'o') && (arr[1][1] == 'x'|| arr[1][1] == 'o') && (arr[1][2] == 'x' || arr[1][2] == 'o') && (arr[2][0] == 'x' || arr[2][0] == 'o') && (arr[2][1] == 'x' || arr[2][1] == 'o') && (arr[2][2] == 'x' || arr[2][2] == 'o'))
       {
        return DRAW; 
       }    

    else if((arr[0][0] == arr[1][0]) && (arr[1][0] == arr[2][0]) && (arr[2][0] == 'o'))
        { return O_WON;}//gamestate = O_WON; return gamestate;}
    else if((arr[0][0] == arr[1][0]) && (arr[1][0] == arr[2][0]) && (arr[2][0] == 'x'))
        { return X_WON;}// return gamestate;}
    else if((arr[0][1] == arr[1][1]) && (arr[1][1] == arr[2][1]) && (arr[2][1] == 'o'))
        {return O_WON;}// return gamestate;}
    else if((arr[0][1] == arr[1][1]) && (arr[1][1] == arr[2][1]) && (arr[2][1] == 'x'))
        {return X_WON;} // return gamestate;}
    else if((arr[0][2] == arr[1][2]) && (arr[1][2] == arr[2][2]) && (arr[2][2] == 'o'))
        {return O_WON;}// return gamestate;}
    else if((arr[0][2] == arr[1][2]) && (arr[1][2] == arr[2][2]) && (arr[2][2] == 'x'))
        {return X_WON;}// return gamestate;}
    else if((arr[0][0] == arr[0][1]) && (arr[0][1] == arr[0][2]) && (arr[0][2] == 'o'))
        {return O_WON;}// return gamestate;}
    else if((arr[0][0] == arr[0][1]) && (arr[0][1] == arr[0][2]) && (arr[0][2] == 'x'))
        {return  X_WON;}// return gamestate;}
    else if((arr[1][0] == arr[1][1]) && (arr[0][1] == arr[1][2]) && (arr[1][2] == 'o'))
        {return O_WON;}// return gamestate;}
    else if((arr[1][0] == arr[1][1]) && (arr[0][1] == arr[1][2]) && (arr[1][2] == 'x'))
        {return X_WON;}// return gamestate;}
    else if((arr[2][0] == arr[2][1]) && (arr[2][1] == arr[2][2]) && (arr[2][2] == 'o'))
      {return O_WON;}// return gamestate;}
    else if((arr[2][0] == arr[2][1]) && (arr[2][1] == arr[2][2]) && (arr[2][2] == 'x'))
        {return X_WON;}// return gamestate;}
    else if((arr[0][0] == arr[1][1]) && (arr[1][1] == arr[2][2]) && (arr[2][2] == 'o'))
        {return  O_WON;}// return gamestate;}
    else if((arr[0][0] == arr[1][1]) && (arr[1][1] == arr[2][2]) && (arr[2][2] == 'x'))
        {return X_WON;}// return gamestate;}
    else if((arr[0][2] == arr[1][1]) && (arr[1][1] == arr[2][0]) && (arr[2][0] == 'o'))
        {return O_WON;}// return gamestate;}
    else if((arr[0][2] == arr[1][1]) && (arr[1][1] == arr[2][0]) && (arr[2][0] == 'x'))
        {return X_WON;}// return gamestate;}
 /*   if( (arr[0][0] =='x' || arr[0][0] == 'o') && (arr[0][1] == 'x' || arr[0][1] == 'o') && (arr[0][2] == 'x' || arr[0][2] == 'o') && (arr[1][0] == 'x' || arr[1][0] == 'o') && (arr[1][1] == 'x'|| arr[1][1] == 'o') && (arr[1][2] == 'x' || arr[1][2] == 'o') && (arr[2][0] == 'x' || arr[2][0] == 'o') && (arr[2][1] == 'x' || arr[2][1] == 'o') && (arr[2][2] == 'x' || arr[2][2] == 'o'))
       {
        return DRAW; 
       }    
*/   
 else
        {
         return UNFINISHED;
        }
}
#endif
