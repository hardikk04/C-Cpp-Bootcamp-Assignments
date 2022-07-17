// 10. Write a program to print a table of N.
#include<stdio.h> 

int main()
{
    int table,i;
    printf("Enter a number");
    scanf("%d",&table);
    for(i=1;i<=10;i++)
    printf("%d x %d = %d\n",table,i,table*i);
    return 0;
}