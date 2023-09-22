#include<iostream>
using namespace std;

int rollno=100;
 namespace NStudent
 {
    int rollno = 10;
 }

 namespace NStudent2
 {
    int rollno = 9;
    namespace NStudent3
    {
        int rollno = 5;
    }
 }
class student
{
   int rollno = 12;

};

int main()
{
    int rollno = 20;
    
    cout<<"\nValue of rollno in NStudent3= "<<rollno;
    cout<<"Value of rollno in Global= "<<::rollno;
    cout<<"\nValue of rollno in NStudent= "<<NStudent::rollno;

    cout<<"\nValue of rollno in NStudent2= "<<NStudent2::rollno;
    cout<<"\nValue of rollno in main= "<<rollno;
    using namespace NStudent2;
    cout<<"\nValue of rollno in NStudent3= "<<NStudent2::NStudent3::rollno;



}