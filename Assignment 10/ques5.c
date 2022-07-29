// 5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h> 

int Nnum(int);
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    Nnum(num);
    return 0;
}
int Nnum(int n)
{
    int i,result=0;
    for(i=1;i<=n;i++){
        result=result+2*i-1;
        // printf("%d + %d = %d\n",i,n,result);
    }
        printf("Sum of N Odd number is %d",result);
}
