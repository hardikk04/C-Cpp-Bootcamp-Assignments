// 2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h> 

int sumOdd(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    sumOdd(n);
    printf("Sum of odd number is %d",sumOdd(n));
    return 0;
}
int sumOdd(int n)
{
    int result;
    if(n==1)
    return 1;
    result=2*n-1+sumOdd(n-1);
    return result;
}