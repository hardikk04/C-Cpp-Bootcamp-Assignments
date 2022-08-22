// 1. Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h> 

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter the first matrix value\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix value\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&b[i][j]);
        }

    }
    printf("The sum of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        c[i][j]=a[i][j]+b[i][j];
    }
        for(i=0;i<3;i++)
        {
            printf("|");
            for(j=0;j<3;j++)
            {
        printf(" %d ",c[i][j]);
            }
            printf("|");
        printf("\n");
        }
    return 0;
}