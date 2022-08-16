// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h> 

int greatest( int num[ ], int );
int main()
{
    int num[10];
    printf("Enter the number\n");
    printf("%d is the greatest number",greatest(num,10));
    return 0;
}
int greatest(int num[ ], int N)
{
    int i,j,max=-99999;
    for(i=0;i<N;i++)
    scanf("%d",&num[i]);
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(max<num[i]);
            max=num[i];
        }
    }
    return num[i];
    
}