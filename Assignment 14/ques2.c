// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.
#include<stdio.h> 

int main()
{
    int num[10],i,sum=0;
    float avg;
    printf("Enter the 10 number for find the avrg\n");
    for(i=0;i<=9;i++)
    {
    scanf("%d",&num[i]);
    sum=sum+num[i];
    }
    avg=sum/10.0;
    printf("%f is the average of 10 number",avg);
    return 0;
}