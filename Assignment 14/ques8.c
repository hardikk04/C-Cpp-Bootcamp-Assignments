// 8. Write a program to find second smallest in an array.Take array values from the user.
#include<stdio.h> 

int main()
{
    int num[10];
    int smallest,s_small,i,j;
    printf("Enter the value of an array\n");
    for(i=0;i<=9;i++)
    scanf("%d",&num[i]);
    smallest=num[0];
    for(i=1;i<5;i++)
    {
        if(smallest>num[i])
        {
        s_small=num[i];
        smallest=num[i];
        }
        if(smallest<num[i])
        if(s_small>num[i])
        s_small=num[i];
    }
    printf("%d",s_small);
        

    return 0;
}