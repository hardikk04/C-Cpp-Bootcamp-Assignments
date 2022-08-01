// 10. Write a recursive function to print reverse of a given number
#include<stdio.h> 

void reverse(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
void reverse(int n)
{   int rem,sum=0;
    if(n!=0)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        printf("%d",sum);
        reverse(n/10);

    }
}