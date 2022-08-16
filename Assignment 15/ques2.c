// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h> 

int smallest(int num[ ], int );
int main()
{
    int num[10];
    printf("Enter the 10 number\n");
    printf("%d is the smallest number\n",smallest(num,10));
    return 0;
}
int smallest(int num[ ], int N)
{
    int i,j,smallest=99999;
    for(i=0;i<N;i++)
    scanf("%d",&num[i]);
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N;j++)
        {
            if(smallest>num[i])
            smallest=num[i];
        }
        
        return num[i];
    }
}