// 6. Program to check whether a year is a leap year or not. Using switch
// statement
#include<stdio.h> 

int main()
{
    int year;
    printf("Enter the year to check\n");
    scanf("%d",&year);

    switch(year%100==0)
    {
        case 1: switch(year%400==0)
        {
            case 1:printf("%d is Century leap year",year);
            break;
            case 0:printf("%d is not Century leap year",year);
            break;
        }
        case 0: switch(year%4==0)
        {
            case 1:printf("%d is leap year",year);
            break;
            case 0:printf("%d is not leap year",year);
            break;
            
        }
    }

    return 0;
}