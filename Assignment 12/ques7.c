// 7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h> 

void sqr(int);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    sqr(n);
    return 0;
}
void sqr(int n)
{
    if(n>=1)
    {
        sqr(n-1);
        printf("Sqr(%d) is %d\n",n,n*n);
    }
}