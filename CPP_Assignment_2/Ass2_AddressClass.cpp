#include<iostream>
using namespace std;

class address
{
    public:

     string building;
     string street;
     string city;
     int pin;

     address()
     {
        this->building = "Dream";
        this->street = "Pune Road";
        this->city = "Kolhapur";
        this->pin =416235;
     }

     address(string building,string street,string city,int pin)
     {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin =pin;
     }

     void setBuilding(string building)
     {
        this->building=building;
     }
     void setStreet(string street)
     {
        this->street=street;
     }
     void setCity(string city)
     {
        this->city=city;
     }
     void setPin(int pin)
     {
        this->pin=pin;
     }

     string getBuilding()
     {
        return this->building;
     }
     string getStreet()
     {
        return this->street;
     }
     string getCity()
     {
        return this->city;
     }
     int getPin()
     {
        return this->pin;
     }


     void accept()
     {
        cout<<"Enter Building :"<<endl;
        cin>>this->building;

        cout<<"Enter Street :"<<endl;
        cin>>this->street;

        cout<<"Enter City :"<<endl;
        cin>>this->city;

        cout<<"Enter Pincode :"<<endl;
        cin>>this->pin;
     }
     void display()
     {
        cout<<"Building : "<<building<<'\n'<<"Street : "<<street<<'\n'<<"City : "<<city<<'\n'<<"Pincode : "<<pin<<'\n'<<endl;
     }


};

int main()
{
    address a;
    a.getBuilding();
    a.accept();
    a.display();

    a.setPin(789456);
    a.setBuilding("Shree Krupa");
    cout<<"After Changes :\n"<<endl;
    a.display();
}