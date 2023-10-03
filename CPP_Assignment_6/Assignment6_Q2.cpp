#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float sal;

public:
    Employee()
    {
         this->id = 0;
         this->sal = 0.0;
        //cout<<"Inside Employee Ctor"<<endl;
    }

    Employee(int id, float sal)
    {
        this->id = id;
        this->sal = sal;
    }
    void setEmployee(int id,float sal)
    {
        this->id=id;
        this->sal=sal;
    }
    void setId(int id)
    {
        cout<<"*********ID Updated*********"<<endl;
        this->id = id;
    }
    void setSal(float sal)
    {
        cout<<"*********Salary Updated*********"<<endl;
        this->sal = sal;
    }
    int getId()
    {
        return this->id;
    }
    float getSal()
    {
        return this->sal;
    }

    void accept()
    {
        cout << "Enter the ID : ";
        cin >> this->id;
        cout << "Enter the Salary : ";
        cin >> this->sal;
        //cout<<"Inside Accept Employee "<<endl;
    }

    void display()
    {
        //cout<<"Inside Display Employee"<<endl;

        cout << "Employee ID = " << this->id << endl;
        cout << "Emoloyee Salary = " << this->sal << endl;
       
    }
};

class Manager : virtual public Employee
{
    private:
        float bonus;
    public:

    Manager()
    {
        this->bonus=0.0;
        //cout<<"Inside Manager Ctor"<<endl;
    }
    Manager(int id,float sal,float bonus)
    {
        Employee(id,sal);
        this->bonus = bonus;
    }
    void setManager(int id,float sal,float bonus)
    {
        Employee::setEmployee(id,sal);
        this->bonus=bonus;
    }
    
    void setBonus(float bonus)
    {
        cout<<"*********Bonus Updated*********"<<endl;
        this->bonus=bonus;
    }
    float getBonus()
    {
        return this->bonus;
    }

    void accept()
    {
       
        cout<<"Enter Bonus : ";
        cin>>this->bonus;
        cout<<"\n";
        //cout<<"Inside Accept Manager"<<endl;

    }

    void display()
    {
        
        cout<<this->bonus;
        //cout<<"Inside Display Manager"<<endl;

    }

protected:
        void accept_manager()
        {
            Employee::accept();

           // cout<<"Accept Bonus of a Manager :"<<endl;
            cout<<"Enter Bonus : ";
            cin>>this->bonus;
            //cout<<"\n";
        }
        void display_manager()
        {
            Employee::display();
            cout<<"Bonus : "<<this->bonus<<endl;
            
        }
};

class Salesman : virtual public Employee
{
    private:
    float commission;
    public:
        Salesman()
        {
            this->commission=0.0;
            //cout<<"Inside Salesman Ctor"<<endl;
        }
        Salesman(float commission)
        {
            this->commission=commission;
        }

        void setCommission(float commission)
        {
           // cout<<"*********Commission Updated*********"<<endl;
            this->commission=commission;
        }
        float getCommission()
        {
            return this->commission;
        }
        void accept()
        {
            
            cout<<"Enter Commission :";
            cin>>this->commission;
            cout<<"\n";
            //cout<<"Inside Accept Salesman"<<endl;

        }

        void display()
        {
            cout<<"Salesman Commision  "<<endl;
            cout<<"Commission : "<<this->commission;
            cout<<"\n";

        }
    protected:
        void accept_Salesman()
        {
              // Employee::accept();
            //cout<<"Accept Salesman Commision : "<<endl;
            cout<<"Enter Commission :";
            cin>>this->commission;
            //cout<<"\n";
           // cout<<"Inside Accept Salesman"<<endl;

        }
        void display_Salesman()
        {
           // Employee::display();
            cout<<"Commision : "<<this->commission<<endl;
        }

};

class Sales_Manager : public Manager,public Salesman
{
    public:
    
    Sales_Manager()
    {
        //cout<<"Inside Sales_Manager Ctor"<<endl;
    }

    Sales_Manager(int id ,float sal  ,float bonus ,float commission )
    {
        Manager::setManager(id,sal,bonus);
        Salesman::setCommission(commission);
    }

    void accept()
    {
        Manager::accept_manager();
        Salesman::accept_Salesman();
         //cout<<"Inside Accept SalesManager"<<endl;

    }
    void display()
    {
        //cout<<"*******SalesManager Details*******" <<endl;

        Manager::display_manager();
        Salesman::display_Salesman();

    }
};

int main()
{
   //Sales_Manager s(12,90000,456,566);
   Sales_Manager s;
   s.accept();
   s.display();   
}
//    s.setId(80219);
//    s.setBonus(6999);
//    s.setCommission(4999);
//    s.display();   

}
