// 6. Write a program to reverse a string.
#include<stdio.h> 

int main()
{
    char str[20],temp;
    int i;
    printf("Enter the string\n");
    gets(str);
    for(i=0;str[i];i++);
    for(i;i!=0;i--)
    printf("%c",str[i]);
    return 0;
}