#include<iostream>
using namespace std;

class stack
{
    private:
        int top=-1;
        int size;
        int *arr;
    public:

        stack()
        {

        }
        stack(int size)
        {
            this->top=-1;
            if(size!=0)
            {
                this->arr = new int[size];
                this->size = size;
            }
            else{
                this->arr = new int[size];
                this->size = 5;
            }
        
        }

        void push(int value)
        {
            if(top==size-1)
            {
                cout<<"Stack is full"<<endl;
            }
            else{
                cout<<"_________Stack Element Pushed_________"<<endl;
                top++;
                this->arr[top] = value;
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
                cout<<"Element ="<<arr[top]<<" Popped"<<endl;
                 this->arr[top] = 0;
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
                cout<<"Value at arr[top] = "<<this->arr[top]<<endl;
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
                cout<<"Stack Element ["<<i<<"] = "<<this->arr[i]<<endl;
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
    s1.StackDisplay();
    s1.pop();
    s1.StackDisplay();
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.StackDisplay();
    s1.pop();
    s1.push(45);
    s1.isFull();

    s1.StackDisplay();

}
