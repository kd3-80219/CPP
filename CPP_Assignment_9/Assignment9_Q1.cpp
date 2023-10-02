#include <iostream>
using namespace std;

int factFun(int n)
{
    int temp=1;

        if (n < 0)
        {
            throw 1;
        }
        else
        {
           for(int i=1;i<=n;i++)
           {
               temp =temp*i;
           }  
        }
    return temp;
    
}
int main()
{
    int num,result;
    cout << "Enter Number : ";
    cin >> num;

    try
    {
       result =  factFun(num);
       cout<<"Factorial of "<<num<<" = "<<result<<endl;
    }
    catch (int error)
    {
        cout << "Wrong input,Enter positive number onlyy!!!!" << endl;
    }
}

/* USING CLASS */

/*
class factException
{
    private:
    string message;
    int errorcode; 
    public:
    factException()
    {
        this->message="";
        this->errorcode=0;
    }
    factException(string message,int errorcode)
    {
        this->message=message;
        this->errorcode = errorcode;
    }
    void printException()
    {
        cout << "ERROR CODE : "<<this->errorcode<< endl;
        cout << this->message << endl;
    }

    friend  int factFun(int n);
};


    int factFun(int n)
{
    int temp=1;

        if (n < 0)
        {   
            throw factException("Wrong input,Enter positive number onlyy!!!!",1001);
        }
        else
        {
           for(int i=1;i<=n;i++)
           {
               temp =temp*i;
           }  
        }
    return temp;
    
}

int main()
{
    int num,result;
    cout << "Enter Number : ";
    cin >> num;

    try
    {
       result = factFun(num);
       cout<<"Factorial of "<<num<<" = "<<result<<endl;
    }
    catch (factException error)
    {
        error.printException();
    }
}

*/