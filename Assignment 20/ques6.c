// 6. Write a program to calculate the length of the string using a pointer
#include<stdio.h>
int length(char *ptr);
int main()
{
    char str[20],i,l;
    printf("Enter the string\n");
    gets(str);
    l=length(&str);
    printf("%d is the length of string\n",l);
}
int length(char *ptr)
{
    int i;
    for(i=0;*(ptr+i);i++);
    return i;
}
