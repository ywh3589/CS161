/********************************************************************* 

** Author: Woohyuk Yang

** Date: February. 23rd. 2016

** Description: CS161 Module8_Assignment8_Project_Defining a class called "ShoppingCart"
*********************************************************************/


#include "Item.hpp"
#include <iostream>

using namespace std;

class ShoppingCart
{
    private:
        Item *itmPtr[100]; 
        int arrayEnd;

    public:
        ShoppingCart();
        void addItem(Item* item);
        double totalPrice();
};
