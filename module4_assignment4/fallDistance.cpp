/********************************************************************* 

** Author: WooHyuk Yang 

** Date: January.27th.2016

** Description: CS161 Module4_Assignment4_Project4.a_program able to get the distance 
				the objects would fall when the gravity exits in the specific time period.

*********************************************************************/ 

#include <iostream>

using namespace std;

double fallDistance (double seconds);

/*int main()
{
    double seconds = 0; 
    
    cout << "puts the falling time" << endl;
    cin >> seconds;

    fallDistance(seconds);
   
   // cout << distance << endl;
    return 0;
}
*/
/********************************************************************* 

** Description:

**  The function can be used to get the distance an object falls because of gravity
	in a specific time period(seconds).

*********************************************************************/ 


double fallDistance (double seconds)
{
    double distance = 0;

   // cout << "puts the falling time" << endl;
   // cin >> seconds;
   // cout << "function calling" << endl;

    distance = 1.0 / 2.0 * 9.8 * seconds * seconds;

  // cout << distance << endl;
       
    return distance;

}
