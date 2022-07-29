// 7. Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS)
#include<stdio.h> 

int fact(int);
int ncr(int , int);
int main()
{
    int n,r;
    printf("Enter the value of n\n");
    scanf("%d",&n);   
    printf("Enter the value of r\n");
    scanf("%d",&r);   
    printf("Combinations of n and r is %d",ncr(n,r));
    return 0;
}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int ncr(int n , int r)
{   int ncr;
    ncr= fact(n)/(fact(n-r)*fact(r));
    return ncr;
}