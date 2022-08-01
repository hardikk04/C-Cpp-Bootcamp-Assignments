// 8. Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h> 
int fib(int);
int main()
{
    int n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d ",fib(i));
    return 0;
}
int fib(n)
{   
    if(n==1||n==0)   
        return n;
       return fib(n-1)+fib(n-2);
    
}