// 2. Write a program to print first N terms of Fibonacci series
#include<stdio.h> 

int main()
{
    int n,a=0,b=1,nextTerm,i;
    printf("Enter a number");
    scanf("%d",&n);   
    if(n==1||n==0){
        printf("Fib(%d) is %d",n,n);
        return 0;
    }
    for(i=2;i<=n;i++){
        nextTerm=a+b;
        a=b;
        b=nextTerm;
    }
    printf("Fib(%d) is %d",n,nextTerm);
    return 0;
}