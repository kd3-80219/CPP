#include<iostream>
using namespace std;

class stack
{
    private:
        int top=-1;
        int size;
        int *ptr;
    
    public:

         
        stack(int size)
        {
            if(size!=0)
            {
                this->ptr = new int[size];
                this->size = size;
            }
            else{
                this->ptr = new int[size];
                this->size = 5;
            }
        
        }
        //COPY CONSTRUCTOR
        stack(stack &s)
        {
            ptr = new int[size];
        }

        // void operator=(stack s)
        // {
        //     for(int i=0;i<size;i++)
        //     {
        //        ptr[i] = s.ptr[i];
        //     }
        // }

        void push(int value)
        {
            if(top==size-1)
            {
                cout<<"Stack is full"<<endl;
            }
            else{
                cout<<"_________Stack Element Pushed_________"<<endl;
                top++;
                this->ptr[top] = value;
            }
        }

        void pop()
        {
            if(top==-1)
            {
                cout<<"Stack is Empty..."<<endl;
            }
            else{
                cout<<"_________Stack Element Popped_________"<<endl;
                cout<<"Element ="<<ptr[top]<<" Popped"<<endl;
                 this->ptr[top] = 0;
                top--;
                
            }
        }

        void peek()
        {
            if(top==-1)
            {
                cout<<"Stack is Empty..."<<endl;
            }
            else{
                cout<<"Value at arr[top] = "<<this->ptr[top]<<endl;
            }
        }

        void isFull()
        {
            if(top==size-1)
            {
                cout<<"Stack is full"<<endl;
            }
           else
            {
                cout<<"Stack is not full"<<endl;
            }
        }
        
        void isEmpty()
        {
            if(top==-1)
            {
                cout<<"Stack is Empty"<<endl;
            }
           else
            {
                cout<<"Stack is not Empty"<<endl;
            }
        }

        void StackDisplay()
        {
            cout<<"___________Stack Elements__________"<<endl;
            for(int i=top;i>-1;i--)
            {
                cout<<"Stack Element ["<<i<<"] = "<<this->ptr[i]<<endl;
            }
        }

        void DisplayCopyStack()
        {
            cout<<"___________Stack Elements__________"<<endl;
            for(int i=top;i>-1;i--)
            {
                 cout<<"Stack 2 Element ["<<i<<"] = "<<ptr[i]<<endl;
            }
        }
};

int main()
{
    int size;
    cout<<"Enter Size of Stack : ";
    cin>>size;

    stack s1(size);
    s1.isEmpty();
    s1.isFull();

    s1.push(10);
    s1.push(20);
    s1.push(30);
   
    stack s2(size);
    s2=s1;
    
    s1.StackDisplay();
    s2.DisplayCopyStack();
    // cout<<endl;
    s1.pop();
    s1.StackDisplay();
    s2.DisplayCopyStack();

    

}
