// 4. Write a program to convert a given string into uppercase
#include<stdio.h> 

int main()
{
    char str[20];
    int i;
    printf("Enter the string\n");
    gets(str);
    for(i=0;str[i];i++)
    {  
        if(str[i]>=97&&str[i]<=122)
        {
        str[i]=str[i]-32;
        printf("%c",str[i]);
        }
        else
        printf("%c",str[i]);

    }



    return 0;
}