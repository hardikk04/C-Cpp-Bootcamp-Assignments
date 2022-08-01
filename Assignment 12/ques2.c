// 2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h> 

void printN(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printN(n);

    return 0;
}
void printN(int n)
{
    if(n>=1)
    {
        printf("%d ",n);
        printN(n-1);
    
    }
}