// 3. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h> 

int sumOdd(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    sumOdd(n);
    printf("Total sum of odd number is %d",sumOdd(n));

    return 0;
}
int sumOdd(int n)
{   
    int result;
    if(n==1)
    return 1;
    result=2*n+sumOdd(n-2);
    return result;

}