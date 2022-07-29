// 4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h> 

int prime(int);
int main()
{
    int n,result;
    printf("Enter the number\n");
    scanf("%d",&n);
    result=prime(n);
    printf("Next prime number is %d",result);
    return 0;
}
int prime(int n)
{
   int i,a=1;
   for(i=2;i<=n+a;i++)
   {
    if(n%i==0){
        continue;
    }
   }
    a++;
   if(i==n)
   return i;
}