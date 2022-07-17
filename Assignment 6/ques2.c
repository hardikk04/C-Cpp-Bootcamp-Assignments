// 2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h> 

int main()
{
    int i,n,r=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++){
    if(i%2==0)
    r=r+i;
    }
    printf("%d",r);
    return 0;
}