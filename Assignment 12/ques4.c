// 4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h> 

void odd(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    odd(n);
    return 0;
}
void odd(int n)
{   if(n%2==0)
    n--;
    if(n>=1)
    {
        printf("%d ",n);
        odd(n-2);
    }
}