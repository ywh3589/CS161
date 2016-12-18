/********************************************************************* 

** Author: Woohyuk Yang

** Date: February. 2nd. 2016

** Description: CS161 Module5_Assignment5_Project5.b_making a class named "BankAccount".

*********************************************************************/ 



#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

#include<string>

using namespace std;

class BankAccount
{
    private : 
       string customerName;
       string customerID;
       double customerBalance;

    public :
        BankAccount(string name, string ID, double balance);
       string getCustomerName();
       string getCustomerID();
       double getCustomerBalance();
       void withdraw(double withdrawMoney);
       void deposit(double depositMoney);

};
#endif
