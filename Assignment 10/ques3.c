// 3. Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)
#include<stdio.h> 

int isEven(int);
int main()
{
    int num,result;
    printf("Enter the number to check even or odd\n");
    scanf("%d",&num);
    result=isEven(num);
    if(result)
    printf("%d is Even",num);
    else
    printf("%d is Odd",num);
    return 0;
}
int isEven(int n)
{
    if(n%2==0)
    return (1);
    else
    return (0);
}