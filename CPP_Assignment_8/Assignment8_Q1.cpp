#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    int inches;

public:
    Distance()
    {
    }

    Distance(int f, int i)
    {
        this->feet = f;
        this->inches = i;
    }

    void accept()
    {
        cout << "Enter Feet : ";
        cin >> this->feet;
        cout << "Enter Inches : ";
        cin >> this->inches;
    }
    void setFeets(int f)
    {
        this->feet = f;
    }
    Distance operator+(Distance d2)
    {
        Distance result;
        result.feet = this->feet + d2.feet;
        result.inches = this->inches + d2.inches;
        return result;
    }

    void display()
    {
        cout << "Distance = " << feet << " Feet"
             << " " << inches << " Inches" << endl;
    }
    Distance operator++()
    {
        Distance incre;
        if(inches>=12)
        {
            this->feet = feet+1;
            this->inches = inches - 12;
        }
        incre.feet = this->feet + 1;
        incre.inches = this->inches + 1;
         return incre;
    }
    friend void operator>>(istream &in, Distance &d1);
    friend void operator<<(ostream &out, Distance &d2);
    friend Distance operator--(Distance x);
    friend bool operator==(Distance dist1,Distance dist2);

};

Distance operator--(Distance x)
{
    Distance decre;
    decre.feet = x.feet - 1;
    decre.inches = x.inches - 1;
    return decre;
}

void operator>>(istream &in,Distance &d1)
{
    cout<<"Enter Feet : ";
    in>>d1.feet;
    cout<<"Enter Inches : ";
    in>>d1.inches;
}
void operator<<(ostream &out,Distance &d2)
{
   out << "Distance = " << d2.feet << " Feet" << " " << d2.inches << " Inches" << endl;
}

bool operator==(Distance dist1,Distance dist2)
{
    if(dist1.feet == dist2.feet && dist1.inches==dist2.inches)
    {
        return true;
    }
    else   
        return false;
}

int main()
{
    Distance d(10, 15);
    cout << d;

    Distance dinout;
    cin>>dinout;
    cout<<dinout;

    Distance d3;
    d3 = ++d;
    cout<<"\nAfter Increment : "<<endl;
    cout<<d3;

    d3 = --d;
    cout<<"\nAfter Decrement : "<<endl;
    cout<<d3;

    cout<<"\nEquality Checking of Object d and d3 : ";
    if (d==d3)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;;
    }

}