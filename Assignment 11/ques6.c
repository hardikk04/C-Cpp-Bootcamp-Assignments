// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h> 

void prime(int , int);
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    prime(a,b);
    return 0;
}
void prime(int a, int b)
{
    int i,j,c;
    c=a>b?a:b;
    for(i=a<b?a+1:b+1;i<=c-1;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }   
            if(j==i)
            printf("%d ",i);
    }
}