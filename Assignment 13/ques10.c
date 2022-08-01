// 10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h> 

int power(int,int);
int main()
{
    int base,p,result;
    printf("Enter the number\n");
    scanf("%d",&base);
    printf("Enter the power\n");
    scanf("%d",&p);
    result=power(base,p);
    printf("%d ",result);
    return 0;
}
int power(int base, int p)
{
    
    if(p!=0)
    return (base * power(base,p-1));
    else
    return 1;

}