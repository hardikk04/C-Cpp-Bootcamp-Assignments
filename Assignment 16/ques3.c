// 3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h> 

int main()
{
    int a[3][3],i,j;
    printf("Enter the matrix value\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }

    printf("The Transpose of matrix\n");
        for(i=0;i<3;i++)
        {
            printf("|");
            for(j=0;j<3;j++)
            {
            printf(" %d ",a[j][i]);
            }
            printf("|");
          printf("\n");
        }
    return 0;
}