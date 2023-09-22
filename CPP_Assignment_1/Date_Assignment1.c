#include<stdio.h>

struct Date
{
    int day ;
    int month;
    int year;
};



void initDate(struct Date* d1)
{
    d1->day=19;
    d1->month=03;
    d1->year=2023;
}


void acceptDateFromConsole(struct Date* d1)
{
    printf("Enter Day : ");
    scanf("%d",&d1->day);

    printf("Enter month : ");
    scanf("%d",&d1->month);

    printf("Enter year : ");
    scanf("%d",&d1->year);

}

void printDateOnConsole(struct Date* d1)
{
    printf("\nDate = %d / %d / %d",d1->day,d1->month,d1->year);
}

int main()
{
    struct Date d1;
    int choice;
    printf("Enter Choice :/n 1)InitDate  2)AcceptDate  3)Exit\n");
     scanf("%d",&choice);
    
    printf("\n");

if(choice!=3)
{
    do
{     
    switch(choice)
    {
        case 1 : printf("Default Date:\n");
                 initDate(&d1);
                 printDateOnConsole(&d1);
                 break;
        
        case 2 : printf("Accept Date :\n");
                 acceptDateFromConsole(&d1);
                 printDateOnConsole(&d1);
                 break;

        case 3: printf("EXIT\n");
                break;

        default: printf("Make proper choice !!!!!\n");
                 
    }
    printf("\nEnter your choice again :\n");
    scanf("%d",&choice);
    if(choice==3)
    {
        printf("EXIT!!");
    }
   
} while (choice!=3);

}
else{
    printf("EXIT");
}    // acceptDateFromConsole(&d1);
    // printDateOnConsole(&d1);
    // initDate(&d1);
    // printDateOnConsole(&d1);
}
