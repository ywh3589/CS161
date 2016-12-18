#include "TicTacToe.hpp"
#include <iostream>



using namespace std;


/********************************************************************* 
** Description:

** The constructor for class "TicTacToe" taking a char parameter which specifies whether 'x' or 'o' should have the first move. 
*********************************************************************/ 

TicTacToe::TicTacToe(char player)
{
    firstPlayer = player;
    cout << firstPlayer << endl;

}


/********************************************************************* 
** Description:

** The function "makeMove" which takes no parameter which keeping looping, asking the player where to put the mark, sending it to the board untill someone wins or the game results in draw. The function should declare the outcome also.
*********************************************************************/
void TicTacToe::play()
{  
   // char firstPlayer;
    int x, y;
  

   



    
// Gamestate gamestate = board.gameState();

#if 0
       if(gamestate == X_WON)
          {
            cout << "X has won" << endl;
            return;
          }
        else 
        if(gamestate == O_WON)
          {
            cout << "O has won" << endl;
            return;
          }
        else
        if(gamestate == DRAW)
          {
            cout << "DRAW" << endl;
            return;
          }

#endif 

while(1)
{
//  Gamestate gamestate = board.gameState();

    cout << "Player " << firstPlayer << ": please enter your move" << endl;
    cin >> x >> y;
  

   bool availfirst = board.makeMove( x, y, firstPlayer);
	cout << endl << endl;    

   board.print(); 
	cout << endl << endl;
    char secondPlayer;

    if(firstPlayer == 'x')
        secondPlayer = 'o';
    else if(firstPlayer == 'o')
        secondPlayer = 'x';

    
        while(availfirst == false)
        {

             cout << "Player " << firstPlayer << ": please enter your move" << endl;
             cin >> x >> y;
             bool nested_availfirst =  board.makeMove( x, y, firstPlayer);
          	cout << endl << endl;
	      board.print();
        	cout << endl << endl; 
	     if(nested_availfirst == true)
              break;
             
         }
#if 1

    Gamestate gamestate = board.gameState();


       if(gamestate == X_WON)
          {
            cout << "X has won" << endl;
            return;
          }
        else 
        if(gamestate == O_WON)
          {
            cout << "O has won" << endl;
            return;
          }
        else
        if(gamestate == DRAW)
          {
            cout << "DRAW" << endl;
            return;
          } 
    #endif

    cout << "Player " << secondPlayer << ": please enter your move" << endl;
    cin >> x >> y;
     bool availsecond =  board.makeMove( x, y, secondPlayer);
    cout << endl << endl;
	  board.print();
    cout << endl << endl;
    
         while(availsecond == false)
         {
                cout << "Player " << secondPlayer << ": please enter your move" << endl;
                cin >> x >> y;
             
                 bool nested_availsecond = board.makeMove( x, y, secondPlayer);
             	cout << endl << endl;
		   board.print();
          	cout << endl << endl;      
                if(nested_availsecond == true)
                 break;
         }

      
    
   #if 1 
     Gamestate gamestate_2 = board.gameState();


       if(gamestate_2 == X_WON)
          {
            cout << "X has won" << endl;
            return;
          }
        else 
        if(gamestate_2 == O_WON)
          {
            cout << "O has won" << endl;
            return;
          }
        else
        if(gamestate_2 == DRAW)
          {
            cout << "DRAW" << endl;
            return;
          } 

	#endif
} 
  

}

/********************************************************************* 
** Description:

** The main function that askes the user which player play the first, creates a new TicTacToe object and starts the game.
*********************************************************************/

int main()
{
    Board board;
    char firstPlayer;
    

    cout << "which player would start first?" << endl;
    firstPlayer = cin.get();
    
   
    TicTacToe tic(firstPlayer);

    
    tic.play();
    
    return 0;


}
