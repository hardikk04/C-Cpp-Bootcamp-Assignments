// 4. Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h> 

int main()
{
    int mat[3][3],i,j,sum=0;
    printf("Enter the value of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&mat[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0&&j==0||i==1&&j==1||i==2&&j==2)
            sum=sum+mat[i][j];
        }
    }
    printf("%d is the sum of right diagonals of a matrix\n",sum);
    

    return 0;
}