// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h> 

int main()
{
    int num[10],se=0,so=0,i;
    printf("Enter the 10 numbers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]%2==0)
        se=num[i]+se;
        else
        so=num[i]+so;
    }
    printf("The sum of all even number is %d\n",se);
    printf("The sum of all odd number is %d\n",so);

    return 0;
}