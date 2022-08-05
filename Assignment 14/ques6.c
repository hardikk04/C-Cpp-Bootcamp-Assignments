// 6. Write a program to sort elements of an array of size 10. Take array values from the
// user.
#include<stdio.h> 

int main()
{
    int num[10],i,j,temp=0;
    printf("Enter the 10 numbers\n");
    for(i=0;i<=9;i++)
        scanf("%d",&num[i]);

    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
        if(num[i]>num[j])
        {
           temp = num[i];
         num[i] = num[j];
         num[j] = temp;
        }
        }
    }
        for(i=0;i<=9;i++)
        printf("%d,",num[i]);

    return 0;
}