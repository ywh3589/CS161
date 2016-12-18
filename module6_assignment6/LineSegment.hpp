/********************************************************************* 

** Author: Woohyuk Yang

** Date: February. 8th. 2016

** Description: CS161 Module6_Assignment6_Project_making a class named "LineSegment".

*********************************************************************/

#ifndef LINESEGMENT_HPP
#define LINESEGMETN_HPP
#include "Point.hpp"

class LineSegment
{
	private:
		Point End1;
		Point End2; 
		
	public:	
		LineSegment(Point p1, Point p2);
		void setEnd1(Point p1);
		void setEnd2(Point p2);
		Point getEnd1();
		Point getEnd2();
		double length(); //using distanceTo method, parameter?
		double slope();  
};

#endif
