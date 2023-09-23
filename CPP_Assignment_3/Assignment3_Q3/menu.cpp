#include "./menu.h"
#include <iostream>
using namespace std;

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