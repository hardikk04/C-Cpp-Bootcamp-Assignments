// 7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h> 

int HCF(int , int);
int main()
{
    int a,b;
    printf("Enter the number\n");
    scanf("%d%d",&a,&b);
    HCF(a,b);
    printf("HCF of (%d,%d) is %d",a,b,HCF(a,b));

    return 0;
}
int HCF(int a , int b)
{   
    if(b!=0)
    return HCF(b, a%b);
    else
    return a;
}