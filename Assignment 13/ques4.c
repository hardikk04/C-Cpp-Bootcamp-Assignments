// 4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h> 

int sqr(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    sqr(n);
    printf("The sum of square(%d) is %d",n,sqr(n));
    return 0;
}
int sqr(int n)
{
    int result;
    if(n==1)
    return 1;
    result = n*n+sqr(n-1);
    return result; 
}