// 9. Program to Convert even number into its upper nearest odd number
// Switch Statement.
#include<stdio.h> 

int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    switch(num%2==0)
    {
            case 1:printf("%d is nearest odd number of %d ",num+1,num);
            break;
            case 0:printf("%d is is already odd num",num);    
    }
    return 0;
}