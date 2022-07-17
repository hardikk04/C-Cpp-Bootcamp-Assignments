// 10. Write a program to reverse a given number
#include<stdio.h> 

int main()
{
    int n,r=0;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        n=n/10;
        printf("%d",r);
    }
    return 0;
}