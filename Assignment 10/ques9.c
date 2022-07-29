// 9. Write a function to check whether a given number contains a given digit or not.
// (TSRS)
#include<stdio.h> 

int num(int);
int main()
{
    int n,digit;
    printf("Enter the number\n");
    scanf("%d",&n);
    digit=num(n);
    if(digit==n)
    printf("Given Number is %d and contain digit is %d both are same\n",n,digit);
    else
    printf("Given Number is %d and contain digit is %d is same\n");
    return 0;
}
int num(int n)
{
    int digit;
    digit=n;
    return digit;
}