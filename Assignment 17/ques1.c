// 1. Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h> 

int main()
{
    char str[20];
    int i;
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    i=i-1;
    printf("%d",i);

    return 0;
}