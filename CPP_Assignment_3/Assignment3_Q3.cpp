#include<iostream>
using namespace std;

class cylinder
{
    private:
            double radius;
            double height;
    public :

    cylinder()
    {
        this->height=0.0;
        this->radius=0.0;
    }

    cylinder(double radius,double height)
    {
        this->radius = radius;
        this->height = height;
    }

    void setRadius(double radius)
    {
        this->radius = radius;
    }
    void setHeight(double height)
    {
        this->height = height;
    }
    double getRadius()
    {
        return this->radius;
    }
    double gatHeight()
    {
        return this->height;
    }

    double getVolume()
    {
        return 3.14*this->radius*this->height;
    }

    void acceptDimmensions()
    {
        cout<<"          * Enter Dimmensions *          "<<endl;
        cout<<"Enter the Radius :"<<endl;
        cin>>this->radius;

        cout<<"Enter the Height :"<<endl;
        cin>>this->height;
    }

    void printVolume()
    {   
        cout<<"VOLUME OF CYLINDER : "<<getVolume()<<endl<<endl;
    }
};

enum Emenu
{
    EXIT,
    Add_Dimmensions,
    Total_Volume
};

Emenu menu()
{
    int choice;
    cout<<"*******************************************"<<endl;

    cout<<"0.EXIT"<<endl;
    cout<<"1.Add Dimmensions"<<endl;
    cout<<"2.Total Volume"<<endl;

    cout<<"\nEnter your choice : ";
    cin>> choice;
    cout<<"*******************************************"<<endl;

    return Emenu(choice);

}
int main()
{
    cylinder c;
    int choice;

    while((choice=(menu()))!=0)
    {
        switch (choice)
        {
        case Add_Dimmensions:c.acceptDimmensions();
            break;

        case Total_Volume:c.printVolume();
            break;

        default:cout<<"Make a valid choice!!!"<<endl;
            break;
        }
    }

    cout<<"Thank you :)"<<endl;

}