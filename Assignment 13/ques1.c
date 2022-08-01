// 1. Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h> 

int sum(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    sum(n);
    printf("Sum of (%d) is %d\n",n,sum(n));
    return 0;
}
int sum(int n)
{
    int result=0;
    if(n==1)
    return 1;
    result=n+sum(n-1);
    return result;

}