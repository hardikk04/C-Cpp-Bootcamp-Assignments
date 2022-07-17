// 3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h> 
int main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;n--)
    printf("%d\n",n);
    return 0;
}