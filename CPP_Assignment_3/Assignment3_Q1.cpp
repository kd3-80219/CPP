#include<iostream>
using namespace std;
class Box
{
    private:
            double length;
            double width;
            double height;
    public :

    Box()
    {
        this->length = 0.0;
        this->width = 0.0;
        this->height = 0.0;
    }

    Box(double length,double width,double height)
    {
        this->length = length;
        this->width = width;
        this->height = height; 
    }

    void acceptDimmensions()
    {
        cout<<"Enter the Length :"<<endl;
        cin>>this->length;

         cout<<"Enter the Width :"<<endl;
        cin>>this->width;

         cout<<"Enter the Height :"<<endl;
        cin>>this->height;

    }
    double getLength()
    {
        return this->length;
    }
    double getWidth()
    {
        return this->width;
    }
    double getHeight()
    {
        return this->height;
    }

    void setLength(double length)
    {
        this->length=length;
    }
    void setWidth(double width)
    {
        this->width = width;
    }
    void setHeigth(int heigth)
    {
        this->height = heigth;
    }
    void Displayvolume()
    {
        double volume ;
        volume = this->length*this->height*this->width;
        cout<<"VOLUME = "<<volume<<endl;
    }
    

};

int menu()
{
    int choice;
    cout<<"*******************************************"<<endl;

    cout<<"0.EXIT"<<endl;
    cout<<"1.Default Volume"<<endl;
    cout<<"2.Give Dimenssions"<<endl;
    cout<<"3.Display Volume"<<endl;

    cout<<"\nEnter your choice : ";
    cin>> choice;
    cout<<"*******************************************"<<endl;

    return choice;

}

int main()
{
    Box b;
    int choice;
    // b.Displayvolume();

    // Box b1(1.1,1.1,1.1);
    // b1.Displayvolume();

    // b1.acceptDimmensions();
    // b1.Displayvolume();

    while((choice=(menu()))!=0)
    {
        switch (choice)
        {
        case 1:b.Displayvolume();
            break;

        case 2:b.acceptDimmensions();
            break;

        case 3:b.Displayvolume();
            break;
        default:cout<<"Make a valid choice!!!"<<endl;
            break;
        }
    }

    cout<<"Thank you :)"<<endl;


}