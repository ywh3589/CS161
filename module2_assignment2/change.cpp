/****************************************************************************************************************************************
** Author: Woohyuk Yang 
** Date: January.10th.2016
** Description: CS161 Module2_Assingment2_Project2.c_a program once a user enter an amount of cents and gets changesin 4 differen coins.
******************************************************************************************************************************************/
#include <iostream>

using namespace std;

int main()
{
	int cents, quarter, quarterLeft, dime, dimeLeft, nickel, penny = 0;

	cout << "Please enter an amount in cents less than a dolalr." << endl;
	cin >> cents;

	quarter = cents / 25;		// getting a value(variable quarter) for Q
	quarterLeft = cents % 25;
	
	dime = quarterLeft / 10;	// getting a value(vriable dime) for D
	dimeLeft = quarterLeft % 10;
    
	nickel = dimeLeft / 5; 		// getting a value(variable nickel) for N
	penny = dimeLeft % 5;		// getting a value(variable penny) for P

	cout << "Your change will be:" << endl << "Q: " << quarter << endl << "D: " << dime << endl<<
    "N: " << nickel << endl << "P: " << penny << endl;

	return 0;
}

