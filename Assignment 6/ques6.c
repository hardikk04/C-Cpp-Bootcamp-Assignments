// 6. Write a program to calculate factorial of a number
#include<stdio.h> 

int main()
{
    int n,r=1;
    printf("Enter a number");
    scanf("%d",&n);
    for(n;1<=n;n--){
        r=n*r;
    }
    printf("%d",r);
    return 0;
}