// 8. Write a recursive function to print binary of a given decimal number
#include<stdio.h> 

void decimal(int);
int main()
{
    int n;
    printf("Enter the decimal number\n");
    scanf("%d",&n);
    decimal(n);
    return 0;
}
void decimal(int n)
{
    if(n>0)
    {
        decimal(n/2);
        printf("%d ",n%2);
    }
}
