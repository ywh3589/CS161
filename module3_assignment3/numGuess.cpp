/********************************************************************* 
** Author: Woohyuk Yang 
** Date: January.20th.2016
** Description: CS161 Module3_Assingment3_project3.c_program which can 
				detect the guessed number whether it is higher or lower 
				than the desired number.  	
**********************************************************************/



#include <iostream>

using namespace std;

int main()
{
    int cnt = 1;
    double numToGuess, num = 0;

    cout << "Enter the number for the player to guess." << endl;
    cin >> numToGuess;


        cout << "Enter your guess." << endl;
        cin >> num;

    while( num != numToGuess )
    {

        if( num > numToGuess )
           {
                cout << "Too high - try again." << endl;
                cin >> num;
           }
        else if( num < numToGuess )
           {
                cout << "Too low - try again." << endl;
                cin >> num;
           }

        cnt++;
    } 

    cout << "You guessed it in " << cnt << " tries." << endl;


    return 0;


}

