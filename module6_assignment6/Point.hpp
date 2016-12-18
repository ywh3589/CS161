/********************************************************************* 

** Author: Woohyuk Yang

** Date: February. 8th. 2016

** Description: CS161 Module6_Assignment6_Project_making a class named "Point".

*********************************************************************/ 

#ifndef POINT_HPP
#define POINT_HPP

class Point
{
	private:
		double XCoord;
		double YCoord;	
	public:
		Point();
		Point(double x, double y);
		void setXCoord(double x);
		void setYCoord(double y);
		double getXCoord();
		double getYCoord();	
		double distanceTo(const Point &point);
};

#endif

