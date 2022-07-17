// 9. Write a program to calculate LCM of two numbers
#include<stdio.h> 

int main()
{
    int a,b,i;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(i=a<b?a:b;i<=a*b;i++){
        if(i%a==0&&i%b==0)
        break;
    }   
        printf("LCM is %d",i);
    return 0;
}