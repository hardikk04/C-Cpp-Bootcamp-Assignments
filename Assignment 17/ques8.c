// 8. Write a program in C to copy one string to another string.
#include<stdio.h> 

int main()
{
    char str1[50],str2[50];
    int i;
    printf("Enter string\n");
    gets(str1);
    for(i=0;str1[i];i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("%s is string 1\n",str1);
    printf("%s is string 2\n",str2);
    

    return 0;
}