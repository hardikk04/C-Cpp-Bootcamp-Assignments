// 9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h> 

int count(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Digit count is %d ",count(n));
    return 0;
}
int count(int n)
{   
    int c=0;
    if(n==0)
    return c;    
    c=1+count(n/10);
    return c;
}
