#include <iostream>

struct Date
{
    int day;
    int month;
    int year;

    void initDate()
    {
        day = 19;
        month = 03;
        year = 2023;
    }

    void acceptDateFromConsole()
    {
        printf("Enter Day : ");
        scanf("%d", &day);

        printf("Enter month : ");
        scanf("%d", &month);

        printf("Enter year : ");
        scanf("%d", &year);
    }

    bool IsLeapYear()
    {
        
        if (year % 100 != 0 && year % 4 == 0)
        {
            return true;
        }
        else 
            if(year % 4 == 0 && year % 400 == 0)
            {
                return true;
            }
        else
        { 
             return false;
        }
    }

    void printDateOnConsole()
    {
        printf("\nDate = %d / %d / %d", day, month, year);
    }
};

int main()
{
    struct Date d1;

    //d1.acceptDateFromConsole();
    //d1.printDateOnConsole();
    //d1.initDate();
    //d1.printDateOnConsole();

    int choice;
    printf("Enter Choice :/n 1)InitDate  2)AcceptDate  3)Exit 4)LeapYearCheck\n");
    scanf("%d", &choice);

    printf("\n");

    if (choice != 3)
    {
        do
        {
            switch (choice)
            {
            case 1:
                printf("Default Date:\n");
                d1.initDate();
                d1.printDateOnConsole();
                if (d1.IsLeapYear())
                     {
                             printf("\nLeap Year\n");
                     }
                    else
                     {
                           printf("\nNot a Leap Year\n");
                     }
                break;

            case 2:
                printf("Accept Date :\n");
                d1.acceptDateFromConsole();
                d1.printDateOnConsole();
                if (d1.IsLeapYear())
                     {
                             printf("\nLeap Year\n");
                     }
                    else
                     {
                           printf("\nNot a Leap Year\n");
                     }
                break;

            case 3:
                printf("EXIT\n");
                break;
        

            default:
                printf("Make proper choice !!!!!\n");
            }
            printf("\nEnter your choice again :\n");
            scanf("%d", &choice);
            if (choice == 3)
            {
                printf("EXIT!!");
            }

        } while (choice != 3);
    }
    else
    {
        printf("EXIT");
    }
    
}
