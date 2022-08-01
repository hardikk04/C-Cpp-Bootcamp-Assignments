// 5. Write a recursive function to print first N even natural numbers
#include<stdio.h> 

void even(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    even(n);
    return 0;
}
void even(int n)
{
    if(n%2)
    n--;
    if(n>2)
    even(n-2);
    printf("%d ",n);
}