#include <iostream>
using namespace std;

  enum acc_type
    {
        SAVING=1,
        CURRENT,
        DMAT
    };

class insufficient_funds
{
    private:
    int accid;
    double cur_balance;
    double withdraw_amt;

    public:

    insufficient_funds(int id,double cb,double wa)
    {
        this->accid=id;
        this->cur_balance=cb;
        this->withdraw_amt=wa;
    }
    

    void display()
    {
        cout<<"Low bank balance,can't withdraw your amount!!!!"<<endl;
    }
};

class account
{
private:
    int id;
    double balance;
    acc_type type;

public:
    account()
    {

    }

    account(int id, int type, double balance)
    {
        this->id = id;
        this->type=(acc_type)type;
        this->balance = balance;
    }

    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return this->id;
    }
    void setType(int type)
    {
        this->type=(acc_type)type;
    }
    int getType()
    {
        return this->type=(acc_type)type;
    }
    void setBalance(double balance)
    {
        this->balance=balance;
    }
    double getBalance()
    {
        return this->balance;
    }

    double deposite()
    {
        int deposite;
        cout<<"Enter amount you want to deposite : ";
        cin>>deposite;
        if(deposite<0)
        {
            throw 1;
        }
        
        this->balance=this->balance + deposite;
        return this->balance;
    }

    double withdraw()
    {
        int withdraw;
        cout<<"Enter amount you want to withdraw : ";
        cin>>withdraw;
        if((this->balance-withdraw)<=500)
        {
            throw insufficient_funds(id,balance,withdraw);
        }
        else
        {
            this->balance=this->balance - withdraw;
            return this->balance;
        }
        // if((balance-withdraw)<500)
        // {
        //     throw 2;
        // }
        // else
        // {
        //     this->balance=this->balance - withdraw;
        //     return this->balance;
        // }
         
    }
    void accept()
    {
        int t;
        
        cout << "Enter Account Id: ";
        cin>>this->id;
        cout << "Enter Account Type: ";
        cin>>t;
        type = (acc_type)t;
        cout<<"Enter Balance : ";
        cin>>this->balance;
    }

    void display()
    {
        cout<<"ID : "<<this->id<<endl;
        cout<<"Account Type :"<<type<<endl;
        cout<<"Balance : "<<this->balance<<endl;
    }
    
};



int menu()
{
    int choice;
    cout<<"***************************"<<endl;
    cout<<"1.ADD ACCOUNT "<<endl;
    cout<<"2.CHECK BALANCE "<<endl;
    cout<<"3.DEPOSITE BALANCE "<<endl;
    cout<<"4.WITHDRAW BALANCE "<<endl;
    cout<<"5.DISPLAY ACCOUNTS "<<endl;
    cout<<"***************************"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    return choice;

}

int main()
{
    int choice;
    int accno;
    account ac;
    account *totalAcc[5];
    int count=0;

    while((choice = menu())!=0)
    {
        switch (choice)
        {
        case 1: 
            if(count<5)
            {
                totalAcc[count] = new account;
                totalAcc[count]->accept();
                count++;
            }
            else
            {
                cout<<"Account can't be added!!!"<<endl;
            }
            
            break;

        case 2: cout<<"Enter account number : ";
                cin>>accno;
              for(int i=0;i<count;i++)
              {
                if(totalAcc[i]->getId() == accno)
                {
                    cout<<"Current Balance = "<<totalAcc[i]->getBalance()<<endl;
                }
                else
                {
                    cout<<"Account number does not exists!!!!"<<endl;
                }

              }
              break;

        case 3: cout<<"Enter account number : ";
                cin>>accno;
                int balance;
              for(int i=0;i<count;i++)
              {
                if(totalAcc[i]->getId() == accno)
                {
                    try
                    {
                      balance=totalAcc[i]->deposite();
                      cout<<"Amount Deposited Successfully!!!!"<<endl;
                      cout<<"Current Balance = "<<balance<<endl;    
                    }
                    catch(int e)
                    {
                        cout<<"Amount can't be negative...."<<endl;
                    }
                   
                }
                else
                {
                    cout<<"Account number does not exists!!!!"<<endl;
                }
              }
              break;

        case 4:cout<<"Enter account number : ";
                cin>>accno;
                
              for(int i=0;i<count;i++)
              {
                if(totalAcc[i]->getId() == accno)
                {
                    try
                    {
                        int balance=totalAcc[i]->withdraw();
                        cout<<"Amount Withdrawed Successfully!!!!"<<endl;
                        cout<<"Current Balance = "<<balance<<endl;
                    }
                    catch(insufficient_funds e)
                    {
                        e.display();
                    }
                    
                }
                else
                {
                    cout<<"Account number does not exists!!!!"<<endl;
                }
              }
              break;
        case 5:
        for(int i=0;i<count;i++)
        {
            totalAcc[i]->display();
        }
                
            break;
        }
    }

}
