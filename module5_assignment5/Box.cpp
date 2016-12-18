
/********************************************************************* 

** Author: Woohyuk Yang

** Date: February. 2nd. 2016

** Description: CS161 Module5_Assignment5_Project5.a_member function implementation file for 
 			    a class named "Box".
*********************************************************************/ 

#include "Box.hpp"

/********************************************************************* 

** Description:

** The default constructor for class "Box" initializing each field of the class to 1.
*********************************************************************/ 
Box::Box()
{
    setHeight(1);
    setWidth(1);
    setLength(1);
}


/********************************************************************* 

** Description:

** The constructor which gets three double data type parameters and pass them to set methods to 
initialize the class data members.
*********************************************************************/ 
Box::Box(double h, double w, double len)
{
    setHeight(h);
    setWidth(w);
    setLength(len);
}


/********************************************************************* 

** Description:

** The function gets a double variable and set it to the class member "height".
*********************************************************************/ 
void Box::setHeight(double h)
{
    height = h;
}


/********************************************************************* 

** Description:

** The function gets a double variable and set it to the class member "width".

*********************************************************************/ 
void Box::setWidth(double w)
{
    width = w;
}


/********************************************************************* 

** Description:

** The function gets a double variable and set it to the class member "length".

*********************************************************************/ 
void Box::setLength(double len)
{
    length = len;
}


/********************************************************************* 

** Description:

** The function calculates and return volum of the box using three variables(height, width, and length).

*********************************************************************/ 
double Box::getVolume()
{
    return height * width * length;
}


/********************************************************************* 

** Description:

** The function calculates and return surface area of the box using two variables(width and length).
*********************************************************************/ 
double Box::getSurfaceArea()
{
    return width * length;
}
