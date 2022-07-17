// 2. Write a program to print the first N natural numbers.
#include<stdio.h> 
int main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d\n",i);
    return 0;
}