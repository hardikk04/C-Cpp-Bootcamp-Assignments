// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.
#include<stdio.h> 

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    switch(num>0)
    {
        case 1: printf("Number is -%d",num);
                break;
        case 0: printf("Number is %d",num);
    }
    return 0;
}