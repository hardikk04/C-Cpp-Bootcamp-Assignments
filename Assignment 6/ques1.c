// 1. Write a program to calculate sum of first N natural numbers
#include<stdio.h> 

int main()
{
   int n,i,result=0;
   printf("Enter a number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   result=result+i;
   printf("%d",result);
    return 0;
}