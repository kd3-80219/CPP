#include<iostream>
using namespace std;

class Time
{
    private:
        int hr;
        int min;
        int sec;

    public:
        Time()
        {
            this->hr=0;
            this->min=0;
            this->sec=0;
        }

        Time(int hr,int min,int sec)
        {       
            this->hr=hr;
            this->min=min;
            this->sec=sec;
        }
        void acceptData()
        {
            cout<<"Enter Hour : ";
            cin>>this->hr;
            cout<<"Enter Minutes : ";
            cin>>this->min;
            cout<<"Enter Seconds : ";
            cin>>this->sec;
        }
        void setHr(int hr)
        {
             this->hr = hr;
        }
        void setMin(int min)
        {
            this->min = min;
        }
        void setSec(int sec)
        {
            this->sec = sec;
        }

        int getHr()
        {
            return this->hr;
        }
        int getMin()
        {
            return this->min;
        }
        int getSec()
        {
            return this->sec;
        }

        void PrintTime()
        {
            cout<<hr<<" : "<<min<<" : "<<sec<<endl;
        }

};

int main()
{
    // Time t(12,10,50);
    // t.PrintTime();

    Time **arr = new Time *[1];

     for(int i=0;i<1;i++)
    {
        arr[i] = new Time();
    } 

    arr[0]->setHr(10);
    arr[0]->setMin(20);
    arr[0]->setSec(1);
    arr[0]->PrintTime();

    // arr[1]->setHr(10);
    // arr[1]->setMin(20);
    // arr[1]->setSec(1);
    // arr[1]->PrintTime();

   
    // for(int i=0;i<2;i++)
    // {
    //     arr[i]->acceptData();
    // }

    for(int i=0;i<1;i++)
    {
        cout<<"Time From Object "<<i+1<<" = ";  
        arr[i]->PrintTime();
    }

    for(int i=0;i<1;i++)
    {
        delete arr[i];
    }

    delete[] arr;
    

}