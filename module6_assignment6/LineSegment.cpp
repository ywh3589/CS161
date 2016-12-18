/********************************************************************* 

** Author: Woohyuk Yang

** Date: February. 8th. 2016

** Description: CS161 Module6_Assignment6_Project_member function implementation of the "LineSegment" class.

*********************************************************************/

#include "LineSegment.hpp"


/********************************************************************* 
** Description:

** The constructor for class "LineSegment" initializing the data members to the values which two
   parameters pass using set method.
*********************************************************************/ 

LineSegment::LineSegment(Point p1, Point p2)
{
	setEnd1(p1);
	setEnd2(p2);
}

/********************************************************************* 
** Description:

** a set method to set the value of variable End1 to the value passed as a parameter.
*********************************************************************/ 

void LineSegment::setEnd1(Point p1)
{
	End1 = p1;
}


/********************************************************************* 
** Description:

** a set method to set the value of variable End2 to the value passed as a parameter.
*********************************************************************/ 

void LineSegment::setEnd2(Point p2)
{
	 End2 = p2;
}


/********************************************************************* 
** Description:

** a get method returning the value of End1.
*********************************************************************/ 

Point LineSegment::getEnd1()
{
	return End1;
}

/********************************************************************* 
** Description:

** a get method returning the value of End2.
*********************************************************************/ 

Point LineSegment::getEnd2()
{
	return End2;
}


/********************************************************************* 
** Description:

** a function getting the length from one point to the another using "distanceTo" function from "Point.cpp"
*********************************************************************/ 

double LineSegment::length() //distanceTo 사용
{
	Point point1 = getEnd1();
    Point point2 = getEnd2();	
	
	double len = point1.distanceTo(point2);
	
	return len;

}


/********************************************************************* 
** Description:

** a function getting the slope of two points.
*********************************************************************/ 

double LineSegment::slope() //?
{
	//Point point1 = getEnd1();
	//Point point2 = getEnd2();

	double slop = (End2.getYCoord() - End1.getYCoord() ) / ( End2.getXCoord() - End1.getXCoord() );
	return slop;
}
