/********************************************************************* 
** Author: Woohyuk Yang 
** Date: January.20th.2016
** Description: CS161 Module3_Assingment3_project3.a_program able to output 
				the minimum and maximum numbers among the entered number by the user.
**********************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int numOfInteger, num1, num2, minNum, maxNum = 0;

    cout << "How many integers would you like to enter? " << endl;
    cin >> numOfInteger;
    

    cout << "Please enter " << numOfInteger << " integers." << endl;
    
    cin >> num1;
    minNum = num1;
    maxNum = num1;
  
    for ( int i = 1; i < numOfInteger; i++)
    {    
        cin >> num2;
         
        if(minNum > num2)
         minNum = num2;
   
        if(maxNum < num2)
         maxNum = num2;
    } 
  
    cout << "min : " << minNum << endl;
    cout << "max : " << maxNum << endl;
    
    return 0;
}
                                               
