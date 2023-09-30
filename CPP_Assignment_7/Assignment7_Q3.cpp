#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float sal;
    string designation;

public:
    Employee()
    {
        //  this->id = 0;
        //  this->sal = 0.0;
        this->designation = "";
    }

    Employee(int id, float sal)
    {
        this->id = id;
        this->sal = sal;
        this->designation = "";
    }
    void setEmployee(int id, float sal)
    {
        this->id = id;
        this->sal = sal;
    }
    void setId(int id)
    {
        cout << "*********ID Updated*********" << endl;
        this->id = id;
    }
    void setSal(float sal)
    {
        cout << "*********Salary Updated*********" << endl;
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

    void acceptemp()
    {
        cout << "Enter the ID : ";
        cin >> this->id;
        cout << "Enter the Salary : ";
        cin >> this->sal;
    }

    void displayemp()
    {
        cout << "Employee ID = " << this->id << endl;
        cout << "Emoloyee Salary = " << this->sal << endl;
    }
    virtual void accept() = 0;
    virtual void display() = 0;
    virtual string role() = 0;
    friend class Manager;
    friend class Salesman;
    friend class Sales_Manager;
};

class Manager : virtual public Employee
{
private:
    float bonus;

public:
    Manager()
    {
        this->bonus = 0.0;
    }
    string role()
    {
        this->designation = "M";
        return this->designation;
    }
    Manager(float bonus)
    {
        this->bonus = bonus;
    }

    void setBonus(float bonus)
    {
        cout << "*********Bonus Updated*********" << endl;
        this->bonus = bonus;
    }

    void setBons()
    {
        cout << "Enter Bonus : ";
        cin>>this->bonus;
        this->bonus = bonus;
    }
    float getBonus()
    {
        cout<<" Bonus : "<<this->bonus<<endl;
        return this->bonus;
    }

    void accept()
    {
        cout << "Enter Employee ID : ";
        cin >> id;
        cout << "Enter Salary : ";
        cin >> sal;
        cout << "Enter Designation : ";
        cin >> designation;
        cout << "Enter Bonus : ";
        cin >> this->bonus;
        cout << "\n";
    }

    void display()
    {
        cout << "-------------------------------" << endl;
        cout << " Employee ID : " << id << endl;
        cout << " Salary : " << sal << endl;
        cout << " Designation : " << designation << endl;
        cout << " Bonus : " << this->bonus << endl
             << endl;
        cout << "-------------------------------" << endl;
    }

};

class Salesman : virtual public Employee
{
private:
    float commission;

public:
    Salesman()
    {
        this->commission = 0.0;
    }
    Salesman(float commission)
    {
        this->commission = commission;
    }

    void setCommission(float commission)
    {
        this->commission = commission;
    }
    void setComm()
    {
        cout << "Enter Commission : ";
        cin>>this->commission;
        this->commission = commission;
    }
    float getCommission()
    {
        cout << " Commission : " << this->commission << endl;
        return this->commission;
    }
    string role()
    {
        this->designation = "S";
        return this->designation;
    }
    void accept()
    {
        cout << "Enter Employee ID : ";
        cin >> id;
        cout << "Enter Salary : ";
        cin >> sal;
        cout << "Enter Designation : ";
        cin >> designation;
        cout << "Enter Commission :";
        cin >> this->commission;
        cout << "\n";
        
    }

    void display()
    {
        cout << "-------------------------------" << endl;
        cout << " Employee ID : " << id << endl;
        cout << " Salary      : " << sal << endl;
        cout << " Designation : " << designation << endl;
        cout << " Commission : " << this->commission << endl;
        cout << "-------------------------------" << endl;
        cout << "\n";
    }

   
};

class Sales_Manager : public Manager, public Salesman
{
public:
    Sales_Manager()
    {
    }

    string role()
    {
        this->designation = "SM";
        return this->designation;
    }
    void accept()
    {

        cout << "Enter Employee ID : ";
        cin >> id;
        cout << "Enter Salary : ";
        cin >> sal;
        cout << "Enter Designation : ";
        cin >> designation;
         Manager::setBons();
         Salesman::setComm();
    }
    void display()
    {
         cout<<"-------------------------------" << endl;
         cout<<" Employee ID : "<<id<<endl;
         cout<<" Salary : "<<sal<<endl;
         cout<<" Designation : "<<this->designation<<endl;
         Manager::getBonus();
         Salesman::getCommission();
         cout<<"-------------------------------" << endl;
    }
};

int menu1()
{
    int choice1;
    cout << "-------------------------------" << endl;
    cout << "0.EXIT" << endl;
    cout << "1.Add Employee" << endl;
    cout << "2.Display Count" << endl;
    cout << "3.Display All Employees" << endl;
    cout << "4.Display Employees of respective designation" << endl;
    cout << "-------------------------------" << endl;
    cout << "Enter your choice : ";
    cin >> choice1;
    cout << "\n";
    return choice1;
}

int menu2()
{
    int choice2;
    cout << "-------------------------------" << endl;
    cout << "0.EXIT" << endl;
    cout << "1.Add Manager" << endl;
    cout << "2.Add Salesman" << endl;
    cout << "3.Add Sales Manager" << endl;
    cout << "-------------------------------" << endl;
    cout << "Enter your choice : ";
    cin >> choice2;
    cout << "\n";
    return choice2;
}

int main()
{
    int choice1;
    int choice2=1;
    Employee *ptr[10];
    int count = 0;
    // int empcount=0;
    int mcount = 0;
    int scount = 0;
    int smcount = 0;
    string role;

    while ((choice1 = menu1()) != 0)
    {
        while (choice1 == 1 && choice2 != 0)
        {

            switch (choice2 = menu2())
            {
            case 1:
                if (count < 10)
                {
                    ptr[count] = new Manager();
                    ptr[count]->accept();
                    ptr[count]->role();
                    count++;
                    mcount++;
                    cout << "Manager Added!!!" << endl;
                }
                else
                {
                    cout << "Employee can't be added!!!!!" << endl;
                }
                break;

            case 2:
                if (count < 10)
                {
                    ptr[count] = new Salesman();
                    ptr[count]->accept();
                    ptr[count]->role();
                    count++;
                    scount++;
                    cout << "Salesman Added!!!" << endl;
                }
                else
                {
                    cout << "Employee can't be added!!!!!" << endl;
                }
                break;

            case 3:
                cout << "3.Add Sales Manager" << endl;

                if (count < 10)
                {
                    ptr[count] = new Sales_Manager();
                    ptr[count]->accept();
                    ptr[count]->role();
                    count++;
                    smcount++;
                    cout << "Sales Manager Added!!!" << endl;
                }
                else
                {
                    cout << "Employee can't be added!!!!!" << endl;
                }
                break;

            default:
                //cout << "Invalid Add!!!" << endl;
                break;
            }
        }

        switch (choice1)
        {
        case 2:
            cout <<"Total Employees = " << count  <<endl;
            cout << "Total Managers = " << mcount << endl;
            cout << "Total Salesman = " << scount << endl;
            cout << "Total Sales Managers = " << smcount << endl;
            break;

        case 3:
            for (int i = 0; i < count; i++)
            {
                ptr[i]->display();
            }
            break;

        case 4:
            for (int i = 0; i < 3; i++)
            {
                cout<<"< Press M to find Managers >"<<endl;
                cout<<"< Press S to find Salesman >"<<endl;
                cout<<"< Press SM to find Sales Manger >"<<endl<<endl;

                cout << "Enter Role you want to find : ";
                cin >> role;

                for (int j = 0; j < count; j++)
                {
                    if (ptr[j]->role() == role)
                    {
                        ptr[j]->display();
                    }
                }

            }
            break;
        default:
            //cout << "Wrong Choice !!!" << endl;
            break;
        }
    }

    cout << "THANK YOU!!!! :)..." << endl;

    for (int i = 0; i < count; i++)
    {
        delete ptr[i];
    }
   
}