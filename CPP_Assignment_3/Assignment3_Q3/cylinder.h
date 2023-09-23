#ifndef CYLINDER_H
#define CYLINDER_H

#include<iostream>
using namespace std;

class cylinder
{
    private:
            double radius;
            double height;
    public :

    cylinder();
    cylinder(double radius,double height);

    void setRadius(double radius);
    void setHeight(double height);
    double getRadius();
    double getHeight();
    double getVolume();
    void acceptDimmensions();
    void printVolume();
};

#endif