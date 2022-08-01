// 6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h> 

void even(int);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    even(n);
    return 0;
}
void even(int n)
{
    if(n%2)
    n--;
    if(2<=n)
    printf("%d ",n);
    even(n-2);
}