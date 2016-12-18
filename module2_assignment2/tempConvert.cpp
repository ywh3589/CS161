
/********************************************************************* 
** Author: Woohyuk Yang 
** Date: January.10th.2016
** Description: CS161_Module2_Assingment2_Project2.b_program converting 
		celsius temperature to fahrenheit temperature
**********************************************************************/ 



#include <iostream>

using namespace std;

int main()
{
	double celTemp, fahrenTemp = 0;  //celTemp is a variable for celsius temperature, fahrenTemp is a variable for fahrenheit temperature.

	cout << "Please enter a Celsious temperature." << endl;
	cin >> celTemp;

	fahrenTemp = 1.8 * celTemp + 32; //The formula for converting the temperature

	cout << "The equivalent Fahrenheit temperature is:" << endl << fahrenTemp << endl;	

	return 0;
}
	
