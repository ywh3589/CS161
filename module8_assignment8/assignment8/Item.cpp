/********************************************************************* 

** Author: Woohyuk Yang

** Date: February. 23rd. 2016

** Description: CS161 Module8_Assignment8_Project_member function implementation for the "Item" class.

*********************************************************************/

#include "Item.hpp"

using namespace std;

Item::Item(string n, double p, int q)
{
    setName(n);
    setPrice(p);
    setQuantity(q);
}

Item::Item()
{
    setName("");
    setPrice(0.0);
    setQuantity(0);
}

/********************************************************************* 
** Description:

** a set method to set the value of variable "name"(string type) to the value passed as a parameter.
*********************************************************************/ 
void Item::setName(string n)
{
    name = n;
}

/********************************************************************* 
** Description:

** a set method to set the value of variable "price"(double type) to the value passed as a parameter.
*********************************************************************/ 
void Item::setPrice(double p)
{
    price = p;
}

/********************************************************************* 
** Description:

** a set method to set the value of variable "quantity"(int type) to the value passed as a parameter.
*********************************************************************/ 
void Item::setQuantity(int q)
{
    quantity = q;
}

/********************************************************************* 
** Description:

** a get method returning the value of name.
*********************************************************************/ 
string Item::getName()
{
    return name;
}

/********************************************************************* 
** Description:

** a get method returning the value of price.
*********************************************************************/ 
double Item::getPrice()
{
    return price;
}

/********************************************************************* 
** Description:

** a get method returning the value of quantity.
*********************************************************************/ 
int Item::getQuantity()
{
    return quantity;
}



