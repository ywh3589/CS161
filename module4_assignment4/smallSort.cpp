/********************************************************************* 

** Author: Woohyuk Yang

** Date: January. 27th. 2016

** Description: CS161 Module4_Assignment4_Project4.b_program able to sort the numbers
				from the smallest number to the biggest number.

*********************************************************************/ 
#include <iostream>

using namespace std;

void smallSort(int &num1, int &num2, int &num3);

/*
int main()
{
    int a = 14;
    int b = 2;
    int c = -90;

    smallSort(a, b, c);

    cout << a << ", " << b << ", " << c << endl;
}
*/
/********************************************************************* 

** Description:

** The function gets three numbers as arguments and sort from small to big number.

*********************************************************************/ 


void smallSort(int &num1, int &num2, int &num3)
{
    int a = num1;
    int b = num2;
    int c = num3;

    if( (num1 <= num2) && (num2<= num3))
    {
        num1 = a, num2 = b, num3 = c;
    }
    else if( (num1 <= num3) && (num3<= num2))
    {
         num1 = a, num2 = c, num3 = b;
    }
    else if( (num2 <= num1) && (num1 <= num3))
    {
        num1 = b, num2 = a, num3 = c;
    }
    else if( (num2 <= num3) && (num3<= num1))
    {
        num1 = b, num2 = c, num3 = a;
    }
    else if( (num3 <= num1) && (num1 <= num2))
    {
        num1 = c, num2 = a, num3 = b;
    }
    else if( (num3 <= num2) && (num2 <= num1))
    {   
        num1 = c, num2 = b, num3 = a;
    }
}
