// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h> 

int main()
{
    printf("1! Answer(%d)\n",fact(1));
    printf("1+2! Answer(%d)\n",1+fact(2));
    printf("2+3! Answer(%d)\n",2+fact(3));
    printf("3+4! Answer(%d)\n",3+fact(4));
    printf("4+5! Answer(%d)\n",4+fact(5));
    return 0;
}
int fact(int n)
{
    int i,result=1;
    for(i=1;i<=n;i++)
    {
        result=result*i;
    }
    return result;
}