// 5. Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.
#include<stdio.h> 

int main()
{
    int num[10],i,small=99999;
    printf("Enter the 10 numbers\n");
    for(i=0;i<=9;i++)
        scanf("%d",&num[i]);
    for(i=0;i<=9;i++)
    {
        
        if(num[i]<small)
        small=num[i];
       
    }
    printf("%d is the smallest number\n",small);

    return 0;
}