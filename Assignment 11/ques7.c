// 7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h> 

void fib(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    fib(n);
    return 0;
}
void fib(int n)
{
    int a=0,b=1,c=0;
    while(n!=0)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        n--;
    }

}
