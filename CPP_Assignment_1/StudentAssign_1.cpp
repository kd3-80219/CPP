#include<iostream>
using namespace std;
class student
{
    public:
    int rollno;
    string name;
    int marks;

    void initStudent()
    {
        this->rollno=1;
        this->name = 'A';
        this->marks=1;
    }

    void acceptStudentFromConsole()
    {
        cout<<"Enter Roll Number : "<<endl;
        cin>>rollno;

        cout<<"Enter Name : "<<endl;
        cin>>name;

        cout<<"Enter Marks : "<<endl;
        cin>>marks;

    }

    void printStudentOnConsole()
    {
        cout<<"*** STUDENT DETAILS ***\n"<<"*Roll Number = "<<rollno<<'\n'<<"*Name = "<<name<<'\n'<<"*Marks = "<<marks<<'\n'<<endl;
    }

};

int main()
{
    student s;
    // s.initStudent();
    // s.printStudentOnConsole();

    // s.acceptStudentFromConsole();
    // s.printStudentOnConsole();

    int choice ;
    cout<<"Enter your choice : \n 1)Default_Student_Details 2)Add_new_Student 3)Exit"<<endl;
    cin>>choice;

    if(choice!=3)
    {
        do
        {
            switch(choice)
            {
                case 1:cout<<"***Default Student Details***\n"<<endl;
                       s.initStudent();
                       s.printStudentOnConsole();
                       break;

                case 2:cout<<"***Add new Student***\n"<<endl;
                       s.acceptStudentFromConsole();
                       s.printStudentOnConsole();
                       break;
                
                case 3 : break;
                default: cout<<"***Enter valid choice***"<<endl;
                        break;
            }

            cout<<"Enter your choice : \n 1)Default_Student_Details 2)Add_new_Student 3)Exit"<<endl;
            cin>>choice;

             if(choice==3)
           {
              cout<<"**** EXIT!!! ****"<<endl;
           }

        }while(choice!=3);
        
    }
    else
    {
        printf("*** EXIT!!! ****");
    }

    
}