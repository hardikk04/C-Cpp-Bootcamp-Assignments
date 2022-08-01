// 5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h> 

int sumOdigits(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    sumOdigits(n);
    printf("The sum of Digits is %d",sumOdigits(n));
    return 0;
}
int sumOdigits(int n)
{   
    
    int result=0,ld=0;
    if(n!=0)
    result = n%10 +sumOdigits(n/10);
    return result;
}