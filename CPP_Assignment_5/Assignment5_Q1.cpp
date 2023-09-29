#include<iostream>
using namespace std;
class Student
{
    private:
        string name;
        string gender;
        int rollno;
        int m1;
        int m2;
        int m3;
    public:

    // Student(string name,string gender,int rollno,int m1,int m2,int m3)
    // {
    //     this->name=name;
    //     this->gender=gender;
    //     this->rollno=rollno;
    //     this->m1=m1;
    //     this->m2=m2;
    //     this->m3=m3;
    // }
    void acceptData()
    {
        cout<<"Enter Name : ";
        cin>>this->name;
        cout<<"Enter Roll Number : ";
        cin>>this->rollno;
        cout<<"Enter Gender : ";
        cin>>this->gender;
        cout<<"Enter Marks of fisrt subject : ";
        cin>>this->m1;
        cout<<"Enter Marks of second subject : ";
        cin>>this->m2;
        cout<<"Enter Marks of third subject : ";
        cin>>this->m3;
    }
    void display()
    {
        cout<<"Name : "<<this->name<<endl;
        cout<<"Roll Number : "<<this->rollno<<endl;
        cout<<"Gender : "<<this->gender<<endl;
        cout<<"Percentage : "<<((this->m1+this->m2+this->m3)/3)<<"%"<<endl;
    }
};

int searchRecords(Student[2])
{
    for(int i=0;i<2;i++)
    {
        
    }
}
int main()
{
    //Student s("Vinayak","Male",80219,90,84,78);
    //s.display();

    Student **st = new Student*[2];

    for(int i=0;i<2;i++)
    {
        st[i] = new Student();
    }
    for(int i=0;i<2;i++)
    {
        st[i]->acceptData();
    }

    for(int i=0;i<2;i++)
    {
        st[i]->display();
    }

     searchRecords( *st);


}