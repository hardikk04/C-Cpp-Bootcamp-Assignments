// 7. Write a program in C to print or display the lower triangular of a given matrix.
#include<stdio.h> 

int main()
{
    int mat[3][3],i,j;
    printf("Enter the value of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&mat[i][j]);
        }
    }
    printf("This is the lower triangular of a given matrix\n");
    for(i=0;i<3;i++)
    {
        printf("|");
        for(j=0;j<3;j++)
        {
        if(i>j)
        mat[i][j]=0;
        printf("%d ",mat[i][j]);
        }
        printf("|");
        printf("\n");
    }
    
    return 0;
}