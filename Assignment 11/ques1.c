// 1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h> 

int lcm(int , int);
int main()
{
    int a,b,result;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    result=lcm(a,b);
    printf("LCM %d and %d is %d",a,b,result);
    return 0;
}
int lcm(int a, int b)
{
    int i,r;
    for(i=a<b?a:b;i<=a*b;i=i+(a<b?a:b)){
        if(i%a==0&&i%b==0)
            break;
    }
    return i;
}