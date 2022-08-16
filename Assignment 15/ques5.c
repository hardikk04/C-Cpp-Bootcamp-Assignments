// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.
#include<stdio.h> 

int same(int num[ ], int n);
int main()
{
    int num[5],i;
    printf("Enter the 5 value\n");
    for(i=0;i<5;i++)
    scanf("%d",&num[i]);
    printf("%d is repate in array",same(num,5));
    return 0;
}
int same(int num[ ], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    if(num[i]==num[i+1])
    return num[i];
    }
    return 0;
}