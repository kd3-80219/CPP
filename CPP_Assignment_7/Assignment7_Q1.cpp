#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void setDay(int day)
    {
        this->day = day;
    }
    void setMonth(int month)
    {
        this->month = month;
    }
    void setYear(int year)
    {
        this->year = year;
    }
    int getDay()
    {
        return this->day;
    }
    int getMonth()
    {
        return this->month;
    }
    int getYear()
    {
        return this->year;
    }

    void acceptDate()
    {
        cout << "Enter Day : ";
        cin >> this->day;
        cout << "Enter Month : ";
        cin >> this->month;
        cout << "Enter Year : ";
        cin >> this->year;
    }
    bool isLeapYear()
    {
        if ((this->year % 100 != 0 && this->year % 4 == 0) || (this->year % 4 == 0 && this->year % 400 == 0))
        {
            cout << "Leap Year!!!" << endl;
            return true;
        }
        else
        {
            cout << "Not a Leap Year..." << endl;
            return false;
        }
    }

    void displayDate()
    {
        cout << this->day << "/" << this->month << "/" << this->year << endl;
        isLeapYear();
    }
};

class Person 
{
private:
    string name;
    string address;
    Date dob;

public:
    Person()
    {
        this->name = "";
        this->address = "";
    }

    Person(string name, string address, int day, int month, int year) : dob(day, month, year)
    {
        this->name = name;
        this->address = address;
    }

    void setDob(int day, int month, int year)
    {
        cout << " Date Of Birth changed!!:" << endl;
        dob.setDay(day);
        dob.setMonth(month);
        dob.setYear(year);
    }
    Date getDob()
    {
        cout << "Updated Date of Birth : " << endl;
        return dob;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setAddress(string address)
    {
        this->address = address;
    }
    string getName()
    {
        return this->name;
    }
    string getAddress()
    {
        return this->address;
    }

    void acceptPerson()
    {
        cout << "Enter Person Name : ";
        cin >> this->name;
        cout << "Enter Person Address : ";
        cin >> this->address;
        dob.acceptDate();
    }

    void displayPerson()
    {
        cout << "--------------------------------------------------" << endl;

        cout << "Enter Person Name : " << this->name << endl;
        cout << "Address : " << this->address << endl;
        cout << "Date of Birth : ";
        dob.displayDate();

        cout << "--------------------------------------------------" << endl;
    }
};

class Employee  : public Person
{
private:
    int id;
    float sal;
    string dept;
    Date doj;

public:
    Employee()
    {
        this->id = 0;
        this->sal = 0.0;
        this->dept = "";
    }

    Employee(int id, float sal, string dept, int day, int month, int year) : doj(day, month, year)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }

    // void setDoj()
    // {
    //     cout<<"Change Date Of Joining :"<<endl;
    //     doj.acceptDate();
    // }

    void setDoj(int day, int month, int year)
    {
        cout << "Date Of Joining changed:" << endl;
        doj.setDay(day);
        doj.setMonth(month);
        doj.setYear(year);
    }

    Date getDoj()
    {
        cout << "Updated Date of Joining :" << endl;
        return doj;
    }
    void setId(int id)
    {
        this->id = id;
    }
    void setSal(float sal)
    {
        this->sal = sal;
    }
    void setDept(string dept)
    {
        this->dept = dept;
    }
    int getId()
    {
        return this->id;
    }
    float getSal()
    {
        return this->sal;
    }
    string getDept()
    {
        return this->dept;
    }

    void acceptEmployee()
    {
        cout << "Enter Employee ID : ";
        cin >> this->id;
        cout << "Enter Employee Salary : ";
        cin >> this->sal;
        cout << "Enter Employee Department : ";
        cin >> this->dept;

        doj.acceptDate();
    }

    void displayEmployee()
    {
        cout << "--------------------------------------------------" << endl;

        cout << "Employee ID : " << this->id << endl;
        cout << "Employee Salary : " << this->sal << endl;
        cout << "Employee Department : " << this->dept << endl;
        cout << "Date of Joining : ";
        doj.displayDate();

        cout << "--------------------------------------------------" << endl;
    }
};



int main()
{
    // Employee e1(80219, 8999.95, "Technical", 12, 10, 1999);
    // e1.displayEmployee();
    // e1.setDoj(1, 1, 2001); // CHANGING JOINING DATE OF EMPLOYEE
    // e1.displayEmployee();

    // Person p1("Vinayak", "Shivaji Peth,Kolhapur", 19, 03, 2000);
    // p1.displayPerson();
    // p1.setDob(16, 8, 2000);
    // p1.displayPerson();
    // // p1.getDob();

     Person *pptr = new Employee();
    
    // pptr->acceptPerson();
    // pptr->displayPerson();


    Employee *eptr = (Employee *)pptr;
    eptr->acceptEmployee();
    eptr->displayEmployee();
    

}