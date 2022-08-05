// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.
#include<stdio.h> 

int main()
{
    int num[5],i;
    printf("Enter the 5 numbers\n");
    for(i=0;i<=4;i++)
    scanf("%d",&num[i]);
    for(i=0;i<=4;i++)
        printf("Values in normal order%d \n",num[i]);
    for(i=4;i>=0;i--)
        printf("Values in reverse order%d \n",num[i]);
    
    return 0;
}