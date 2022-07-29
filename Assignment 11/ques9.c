// 9. Write a program in C to find the square of any number using the function.
#include<stdio.h> 

int sqr(int);
int main()
{
    int n;
    printf("Enter any number to find square\n");
    scanf("%d",&n);
    sqr(n);
    printf("Square of (%d) is %d",n,sqr(n));
    return 0;
}
int sqr(int n)
{
    return (n*n);   
}