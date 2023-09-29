#include<iostream>
using namespace std;

class Sales
{
    private:
    float bill;

    public:
    Sales()
    {
        this->bill=0;
    }
    Sales(float bill)
    {
        this->bill=bill;
    }
    virtual void acceptData()=0;
    virtual int calculatePrice() = 0;
    virtual int discount()=0;
    virtual void display()=0;

    void setBill(double bill)
    {
        this->bill=bill;
    }

};

class Book : public Sales
{
    private:
    int id;
    string title;
    string author;
    int price;

    public:

    Book()
    {
        this->id=id;
        this->title="";
        this->author="";
        this->price=0;
    }
    Book(int id,string title,string author,int price)
    {
        this->id=id;
        this->title=title;
        this->author=author;
        this->price=price;
    }

    void setId(int id)
    {
        this->id=id;
    }
    int getId()
    {
        return this->id;
    }
    void setTitle(string title)
    {
        this->title=title;
    }
    string getTitle()
    {
        return this->title;
    }
    void setAuthor(string author)
    {
        this->author=author;
    }
    string getAuthor()
    {
        return this->author;
    }
    void setPrice(int price)
    {
        this->price=price;
    }
    int getPrice()
    {
        return this->price;
    }

    void acceptData()
    {
        cout<<"Enter ID : ";
        cin>>this->id;
        getchar();
        cout<<"Enter Title : ";
        getline(cin,this->title);
        cout<<"Enter Author : ";
        getline(cin,this->author);
        cout<<"Enter Price : ";
        cin>>this->price;
        cout<<"\n"<<endl;

    }

    int discount()
    {
        this->price = this->price *0.95;
         return this->price;
    }

     int calculatePrice()
    {
        return this->price;
    }
    void display()
    {
        cout<<"------------------------------"<<endl;
        cout<<" Book ID  : "<<this->id<<endl;
        cout<<" Book Title : "<<this->title<<endl;
        cout<<" Book Author : "<<this->author<<endl;
        cout<<" Book Price : "<<this->price<<endl;
        cout<<"------------------------------"<<endl;
    }

};

class Tape : public Sales
{
    private:
    int id;
    string title;
    string artist;
    int price;

    public:

    Tape()
    {
        this->id=id;
        this->title="";
        this->artist="";
        this->price=0;
    }
    Tape(int id,string title,string artist,int price)
    {
        this->id=id;
        this->title=title;
        this->artist=artist;
        this->price=price;
    }

    void setId(int id)
    {
        this->id=id;
    }
    int getId()
    {
        return this->id;
    }
    void setTitle(string title)
    {
        this->title=title;
    }
    string getTitle()
    {
        return this->title;
    }
    void setArtist(string artist)
    {
        this->artist=artist;
    }
    string getArtist()
    {
        return this->artist;
    }
    void setPrice(int price)
    {
        this->price=price;
    }
    int getPrice()
    {
        return this->price;
    }

    void acceptData()
    {
        cout<<"Enter ID : ";
        cin>>this->id;
        getchar();
        cout<<"Enter Title : ";
        getline(cin,this->title);
        cout<<"Enter Artist : ";
        getline(cin,this->artist);
        cout<<"Enter Price : ";
        cin>>this->price;
        cout<<"\n"<<endl;
    }

    int discount()
    {
        this->price = this->price *0.90;
        return this->price;
    }

    int calculatePrice()
    {
        return this->price;
    }
    void display()
    {
        cout<<"------------------------------"<<endl;
        cout<<" Tape ID  : "<<this->id<<endl;
        cout<<" Tape Title : "<<this->title<<endl;
        cout<<" Tape Artist : "<<this->artist<<endl;
        cout<<" Tape Price : "<<this->price<<endl;
        cout<<"------------------------------"<<endl;
       
    }


};

int menu()
{
    int choice;
    cout<<"-------------------------------"<<endl;
    cout<<"0.EXIT"<<endl;   
    cout<<"1.Book Sold"<<endl;
    cout<<"2.Tape Sold"<<endl;
    cout<<"3.Display Bill"<<endl;
    cout<<"4.Display Books & Tapes Sold"<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    cout<<"\n";
    return choice;
    
}


int main()
{
    
    int choice;
    Sales *ptr[3];
    int count=0;
    int bill=0;

    while((choice=menu())!=0)
    {
        switch (choice)
        {
        case 1:
                if(count<3)
                {
                    ptr[count] = new Book();
                    ptr[count]->acceptData();
                    ptr[count]->calculatePrice();
                    count++;
                    
                }
                else{
                    cout<<"You can't purchase any more!!!"<<endl;
                }
            break;
        case 2:
                if(count<3)
                {
                    ptr[count] = new Tape();
                    ptr[count]->acceptData();
                    ptr[count]->calculatePrice();
                    count++;

                }
                else{
                    cout<<"You can't purchase any more!!!"<<endl;
                }
            break;
        
        case 3: 

                for(int i=0;i<count;i++)
                {
                   bill= bill + ptr[i]->discount();
                }
                cout<<"Total Bill : "<<bill<<endl<<endl;
                
            break;

        case 4 :
                for(int i=0;i<count;i++)
                {
                    ptr[i]->display();
                }
            break;

        default:cout<<"Wrong Choice!!!!!"<<endl;
            break;
        }

        for(int i=0;i<3;i++)
        {
            delete ptr[i];
        }
    }

    cout<<"THANK YOU!!  COME AGAIN :)"<<endl;
}