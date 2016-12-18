/********************************************************************* 
** Author: Woohyuk Yang

** Date: February. 23rd. 2016

** Description: CS161 Module8_Assignment8_Project_Defining a class called "Item"
*********************************************************************/

#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>
#include <string>

using namespace std;

class Item 
{
    private:
        string name;
        double price;
        int quantity;


    public:
        Item(string n, double p, int q);
        Item();
        void setName(string n);
        void setPrice(double p);
        void setQuantity(int q);
        string getName();
        double getPrice();
        int getQuantity();

};

#endif
