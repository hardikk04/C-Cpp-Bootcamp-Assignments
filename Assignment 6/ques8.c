// 8. Write a program to check whether a given number is a Prime number or
// not
#include<stdio.h> 

int main()
{
    int n,i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0)
        break;
    }   
        if(i==n)
        printf("%d is Prime number",n);
        else
        printf("%d is not Prime number",n);
    return 0;
}