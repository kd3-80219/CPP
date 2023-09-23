#include<iostream>
using namespace std;

class tollbooth
{
    private:
            unsigned int total_cars;
            double total_money;
    
    public:

    tollbooth()
    {
        this->total_cars=0;
        this->total_money = 0.0;
    }

    void payingCars()
    {
        this->total_cars = this->total_cars+1;
        this->total_money = this->total_money+0.50;
    }

    void nonPayingCars()
    {
        this->total_cars = this->total_cars+1;
    }

    void printOnConsole()
    {
        int payCars ;
        payCars = total_money*2;
        cout<<"Total Cars: "<<this->total_cars<<endl;
        cout<<"Total Amount: "<<this->total_money<<endl;
        cout<<"Total Paying Cars: "<<payCars<<endl;
        cout<<"Total Non-Paying Cars :"<<this->total_cars-payCars<<endl;
       
    }

};

int menu()
{
    int choice;
    cout<<"*******************************************"<<endl;

    cout<<"0.EXIT"<<endl;
    cout<<"1.Add Paying Car"<<endl;
    cout<<"2.Add Non-Paying Car"<<endl;
    cout<<"3.Total Amount"<<endl;

    cout<<"\nEnter your choice : ";
    cin>> choice;
    cout<<"*******************************************"<<endl;

    return choice;

}

int main()
{
    tollbooth t;
    int choice;
    // t.payingCars();
    // t.nonPayingCars();
    // t.printOnConsole();

    while((choice=(menu()))!=0)
    {
        switch (choice)
        {
        case 1:t.payingCars();
            break;

        case 2:t.nonPayingCars();
            break;

        case 3:t.printOnConsole();
            break;
        default:cout<<"Make a valid choice!!!"<<endl;
            break;
        }
    }

    cout<<"Thank you :)"<<endl;

}
