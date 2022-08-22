// 6. Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h> 

int main()
{
    int mat[3][3],i,j,row=0,col=0,line=1;
    printf("Enter the value of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        row=row+mat[i][j];
        }
        printf("Addition of %d Row is %d\n",line,row);
        line++;
        row=0;
    }
    line=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        col=col+mat[j][i];
        }
        printf("Addition of %d Columns is %d\n",line,col);
        line++;
        col=0;
    }

    return 0;
}