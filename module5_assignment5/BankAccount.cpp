/********************************************************************* 

** Author: Woohyuk Yang

** Date: February. 2nd. 2016

** Description: CS161 Module5_Assignment5_Project5.b_member function implementation file for 
 			    a class named "BankAccount".
*********************************************************************/ 

#include "BankAccount.hpp"
//#include <iostream>

using namespace std;


/********************************************************************* 

** Description:

** The constructor for class "BankAccount" initializing each field of the class taking three variables.
*********************************************************************/ 
BankAccount::BankAccount(string name, string ID, double balance)
{
    customerName = name;
    customerID = ID;
    customerBalance = balance;

}


/********************************************************************* 

** Description:

** The function returns the value in member variable customerName.
*********************************************************************/ 
string BankAccount::getCustomerName()
{
    return customerName;
}



/********************************************************************* 

** Description:

** The function returns the value in member variable customerID.
*********************************************************************/ 
string BankAccount::getCustomerID()
{
    return customerID;
}


/********************************************************************* 

** Description:

** The function returns the value in member variable customerBalance.
*********************************************************************/ 
double BankAccount::getCustomerBalance()
{
    return customerBalance; 
}


/********************************************************************* 

** Description:

** The function calculates the value in member variable customerBalance after withdrawing money.
*********************************************************************/ 
void BankAccount::withdraw(double withdrawMoney)
{
    customerBalance -= withdrawMoney;
   // cout << "inline" << customerBalance << endl;
}


/********************************************************************* 

** Description:

** The fuction calculates the value in member variable customerBalance after depositing money.
*********************************************************************/ 
void BankAccount::deposit(double depositMoney)
{
    customerBalance += depositMoney;
   // cout << "inline" << customerBalance << endl;
}

