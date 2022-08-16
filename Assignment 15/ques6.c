// 6. Write a function in C to read n number of values in an array and display it in reverse
// order.
#include<stdio.h> 

void reverse(int num[ ], int n);
int main()
{
    int num[5],i;
    printf("Enter the numbers\n");
    for(i=0;i<5;i++)
    scanf("%d",&num[i]);
    for(i=0;i<5;i++)
    printf("Before reverse %d\n",num[i]);
    reverse(num,5);
  
    
    return 0;
}
void reverse(int num[ ], int n)
{
    int i;
    for(i=4;i>=0;i--)
    printf("After reverse %d\n",num[i]);


    
}