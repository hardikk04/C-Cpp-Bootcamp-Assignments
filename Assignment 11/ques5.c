// 5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h> 

int prime(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    prime(n);
    return 0;
}
int prime(int n)
{
    int i,j;
    for(i=2;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(j==i)
        printf("%d ",i);
    }
}
