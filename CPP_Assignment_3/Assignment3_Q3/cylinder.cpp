#include "./cylinder.h"

  cylinder::cylinder()
    {
        this->height=0.0;
        this->radius=0.0;
    }

    cylinder::cylinder(double radius,double height)
    {
        this->radius = radius;
        this->height = height;
    }

    void cylinder::setRadius(double radius)
    {
        this->radius = radius;
    }
    void cylinder::setHeight(double height)
    {
        this->height = height;
    }
    double cylinder::getRadius()
    {
        return this->radius;
    }
    double cylinder::getHeight()
    {
        return this->height;
    }

    double   cylinder::getVolume()
    {
        return 3.14*this->radius*this->height;
    }

    void cylinder::acceptDimmensions()
    {
        cout<<"          * Enter Dimmensions *          "<<endl;
        cout<<"Enter the Radius :"<<endl;
        cin>>this->radius;

        cout<<"Enter the Height :"<<endl;
        cin>>this->height;
    }

    void cylinder::printVolume()
    {   
        cout<<"VOLUME OF CYLINDER : "<<getVolume()<<endl<<endl;
    }