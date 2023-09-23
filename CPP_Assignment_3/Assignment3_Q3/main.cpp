#include "./cylinder.h"
#include "./menu.h"

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