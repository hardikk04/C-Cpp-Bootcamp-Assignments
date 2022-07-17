// 7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h> 

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    for(n;1<=n;n--)
    printf("%d\n",2*n);
    return 0;
}