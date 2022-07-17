// 5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h> 

int main()
{
    int i,r=0,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        r=i*i*i+r;
    }
    printf("%d",r);
    return 0;
}