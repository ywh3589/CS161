/********************************************************************* 

** Author: Woohyuk Yang

** Date: February. 23rd. 2016

** Description: CS161 Module8_Assignment8_Project_member function implementation for the "ShoppingCart" class.

*********************************************************************/

#include "ShoppingCart.hpp"
#include <iostream>

using namespace std;

/********************************************************************* 
** Description:

** The constructor for class "ShoppingCart" initializing each element of the array to NULL 
and initianlizes arrayEnd to zero.
*********************************************************************/ 
ShoppingCart::ShoppingCart()
{
    for(int i = 0; i < 100; i++)
    {
        itmPtr[i] = NULL; //Item* itmPtr[i] = 0;
    }
    arrayEnd = 0;
}

/********************************************************************* 
** Description:

** The function taking a parameter a pointer to an Item and adds it to the array updating arrayEnd.
*********************************************************************/
void ShoppingCart::addItem(Item* item)
{
    itmPtr[arrayEnd] = item;
    arrayEnd++;
}

/********************************************************************* 
** Description:

** The function returning the total cost of all items in the ShoppingCart.
*********************************************************************/ 
double ShoppingCart::totalPrice()
{
    double total = 0;

    
    for(int n = 0; n < arrayEnd; n++)
    {

        total += (*itmPtr[n]).getPrice() * (*itmPtr[n]).getQuantity();
    }
}
