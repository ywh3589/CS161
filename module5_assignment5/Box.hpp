
/********************************************************************* 

** Author: Woohyuk Yang

** Date: February. 2nd. 2016

** Description: CS161 Module5_Assignment5_Project5.a_making a class named "Box".

*********************************************************************/ 



#ifndef BOX_HPP
#define BOX_HPP

class Box
{
    private:
        double height;
        double width;
        double length;
    public:
        Box(double h, double w, double len);
        Box();
        void setHeight(double h);
        void setWidth(double w);
        void setLength(double len);
        double getVolume();
        double getSurfaceArea();

};

#endif
