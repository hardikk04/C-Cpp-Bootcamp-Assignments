// 2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h> 

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
    printf("Enter the value of first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter the value of second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&b[i][j]);
    }
    printf("The product of two matrices is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        for(k=0;k<3;k++)
        {
            sum=sum+a[i][k]*b[k][j];
        }
        c[i][j]= sum;
        sum=0;
        }
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