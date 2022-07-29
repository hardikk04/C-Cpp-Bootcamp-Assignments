// 8. Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time. (TSRS)
#include<stdio.h> 


int fact(int);
int p(int,int);
int main()
{
    int r,n,result;
    printf("Enter the value of N and R\n");
    scanf("%d%d",&n,&r);
    printf("Result of %dP%d = %d",n,r,p(n,r));
    return 0;
}
int fact(int n)
{
    int i,result=1;
    for(i=1;i<=n;i++)
    {
        result=result*i;       
    }
    return result;    
}
int p(int n,int r)
{
    int p;
    p=fact(n)/fact(n-r);
    return p;
}
