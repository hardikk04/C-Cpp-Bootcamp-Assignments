// 3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h> 

int prime(int);
int main()
{
    int n,result;
    printf("Enter the number\n");
    scanf("%d",&n);
    result=prime(n);
    if(result)
    printf("%d is prime",n);
    else
    printf("%d is not prime",n);

    return 0;
}
int prime(int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        break;
    }
    if(n==i)
    return 1;
    else
    return 0;
        
}