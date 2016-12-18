/********************************************************************* 

** Author: Woohyuk Yang

** Date: February. 8th. 2016

** Description: CS161 Module6_Assignment6_Project_member function implementation for the "Point" class.

*********************************************************************/

#include "Point.hpp"
#include <cmath>

/********************************************************************* 
** Description:

** The constructor for class "Point" initializing each field of the class to 0.
*********************************************************************/ 

Point::Point()
{
	setXCoord(0);//XCoord = 0;
	setYCoord(0);//YCoord = 0;
}

/********************************************************************* 
** Description:

** The constructor for class "Point" initializing each field of the class to the values which two
   parameters pass using set method.
*********************************************************************/ 

Point::Point(double x, double y)
{
	setXCoord(x);
	setYCoord(y);
}

/********************************************************************* 
** Description:

** a set method to set the value of variable XCoord to the value passed as a parameter.
*********************************************************************/ 

void Point::setXCoord(double x)
{
	XCoord = x;
}


/********************************************************************* 
** Description:

** a set method to set the value of variable YCoord to the value passed as a parameter.
*********************************************************************/ 

void Point::setYCoord(double y)
{
	YCoord = y;
}


/********************************************************************* 
** Description:

** a get method returning the value of XCoord.
*********************************************************************/ 

double Point::getXCoord()
{
	return XCoord;
}

/********************************************************************* 
** Description:

** a get method returning the value of YCoord.
*********************************************************************/ 

double Point::getYCoord()
{
	return YCoord;
}


/********************************************************************* 
** Description:

** a function getting a distance from the point passed as a parameter to the point that we called the method of using sqrt function.
*********************************************************************/ 

double Point::distanceTo(const Point &point)
{
	double dist = sqrt ( (point.XCoord - getXCoord()) * (point.XCoord - getXCoord()) + (point.YCoord - getYCoord()) * (point.YCoord - getYCoord()) );
	//double dist = sqrt() 
	return dist;

}

