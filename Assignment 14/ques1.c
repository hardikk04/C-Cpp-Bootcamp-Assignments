// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.
#include<stdio.h> 

int main()
{
    int num[10],i,sum=0;
    printf("Enter the 10 number\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("%d",sum);

    return 0;
}