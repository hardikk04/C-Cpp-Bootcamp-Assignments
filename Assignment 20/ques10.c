// 10. Write a program to print a string in reverse using a pointer
#include<stdio.h>
void reverse(char *ptr);
int main()
{
    char str[20];
    printf("Enter the string\n");
    gets(str);
    reverse(&str);
}
void reverse(char *ptr)
{
    int i;
    for(i=0;*(ptr+i);i++);
    for(i=i-1;i>=0;i--)
    {
        printf("%c",*(ptr+i));
    }
}
