/********************************************************************* 
** Author: Woohyuk Yang 
** Date: January.10th.2016
** Description: CS161 Module2_Assingment2_Project2.a__program which
                 gets 5 numbers and calculates the average.
**********************************************************************/ 

#include <iostream>

using namespace std;

int main()
{
	double num1, num2, num3, num4, num5 = 0; //setting 5 variables for 5 numbers which will be entered by a user.
	double sum, average = 0;
	cout << "Please enter five numbers." << endl;
	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	sum = num1 + num2 + num3 + num4 + num5;
	average = sum / 5.0;

	cout << "The average of those numbers is:" << endl << average << endl;
	
	return 0;
}
