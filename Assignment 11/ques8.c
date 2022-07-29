// 8. Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h> 

int fact(int);
int comb(int,int);
void pasal(int);
int main()
{
    int i,j,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    pasal(n);

    return 0;
}
void pasal(int n)
{   int i,j;
     for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {  
            printf(" %d ",comb(i,j));
        }
        printf("\n");
    }
}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
    fact=fact*i;
    }
     return fact;   
}
int comb(int n,int r)
{
    int ncr;
    ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}