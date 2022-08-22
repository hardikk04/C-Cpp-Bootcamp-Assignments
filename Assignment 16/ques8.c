// 8. Write a program in C to print or display an upper triangular matrix.
#include<stdio.h> 

int main()
{
    int mat[3][3],i,j;
    printf("Enter the values of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("This is the upper triangular matrix\n");
    for(i=0;i<3;i++)
    {
        printf("|");
        for(j=0;j<3;j++)
        {
            if(i<j)
            mat[i][j]=0;
            printf(" %d ",mat[i][j]);
        }
        printf("|");
        printf("\n");
    }
    return 0;
}