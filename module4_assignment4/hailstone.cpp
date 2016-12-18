
/********************************************************************* 

** Author: Woohyuk Yang

** Date: January. 27th. 2016

** Description: CS161 Module4_Assignment4_Project4.c_program able to count the times
				to reach 1 according to a hailstone sequence.
*********************************************************************/ 


#include <iostream>

using namespace std;

int hailstone(int& );

/*
int main()
{
    int startInteger = 0;

    cout << "put start integer" << endl;
    cin >> startInteger;

    hailstone(startInteger);

    return 0;
}
*/
/********************************************************************* 

** Description:

** The function gets an integer and return how many times do it take to reach 1
   according to a hailstone sequence. 

*********************************************************************/ 

int hailstone(int& startInteger)
{
   // int startInteger = 0;
    int cnt = 0;

    while(startInteger != 1)
    {
        if(startInteger % 2 == 0 )
            startInteger = startInteger / 2;
        else
            startInteger = 3 * startInteger + 1;

        cnt++;
    }
//:    cout << cnt << endl;
    return cnt;
}
