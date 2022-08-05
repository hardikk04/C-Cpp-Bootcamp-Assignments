// 4. Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.
#include<stdio.h> 

int main()
{
    int num[10],i,max=-99999;
    printf("Enter the 10 number to find greatest amoung\n");
    for(i=0;i<=9;i++)
        scanf("%d",&num[i]);
    
    for(i=0;i<=9;i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("%d is the greatest number\n",max);
    return 0;
}