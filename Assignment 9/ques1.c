// 1. Write a program which takes the month number as an input and display
// number of days in that month.
#include<stdio.h> 

int main()
{
    int month;
    printf("Enter the month number");
    scanf("%d",&month);
    switch (month)
    {
    case 1: printf("Jan 31");
        break;
    case 2: printf("Feb 28");
        break;
    case 3: printf("Mar 31");
        break;
    case 4: printf("April 30");
        break;
    case 5: printf("May 31");
        break;
    case 6: printf("June 30");
        break;
    case 7: printf("July 30");
        break;
    case 8: printf("August 31");
        break;
    case 9: printf("Sept 30");
        break;
    case 10: printf("Oct 31");
        break;
    case 11: printf("Nov 30");
        break;
    case 12: printf("Dec 31");
        break;
    
    default: printf("Wrong number");
        break;
    }
    return 0;
}