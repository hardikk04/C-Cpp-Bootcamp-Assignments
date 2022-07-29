// 4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h> 

void Nnum (int);
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    Nnum(num);   
    return 0;
}
void Nnum(int n)
{
    int sum=0,i;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum of N number is %d",sum);
}