// 1. Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h> 

int swap(int *, int *);
int main()
{
    int a,b;
    printf("Enter the value of A and B\n");
    scanf("%d%d",&a,&b);
    printf("A=%d and B=%d",swap(&a,&b),swap(&a,&b));
    return 0;
}
int swap(int *p , int *q)
{
    int temp=0;
    temp=*p;
    *p=*q;
    *q=temp;
    return temp;
}