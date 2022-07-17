// 10. Write a program to print a table of 5.
#include<stdio.h> 

int main()
{
    int table=5,i;
    for(i=1;i<=10;i++)
    printf("%d x %d = %d\n",table,i,table*i);
    return 0;
}