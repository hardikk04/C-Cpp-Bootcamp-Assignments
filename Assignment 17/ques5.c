// 5. Write a program to convert a given string into lowercase
#include<stdio.h> 

int main()
{
    char str[20];
    int i;
    printf("Enter the string\n");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
            printf("%c",str[i]);
        }
        else
            printf("%c",str[i]);
    }
    return 0;
}