// 5. Write a program to check whether two given numbers are co-prime
// numbers or not
#include<stdio.h> 

int main()
{
    int a,b,c;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    for(c=a>b?a:b;c>=2;c--){
    if(c%a==0&&c%b==0)
    break;
    }
    if(c==1)
    printf("%d and %d is co prime",a,b);
    else
    printf("%d and %d is not co prime",a,b);
    return 0;
}