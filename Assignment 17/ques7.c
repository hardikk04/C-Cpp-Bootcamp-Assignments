// 7. Write a program in C to count the total number of alphabets, digits and special
// characters in a string.
#include<stdio.h> 

int main()
{
    char str[20];
    int i,Alpha=0,digits=0,special=0;
    printf("Enter Alphabets,digits and special characters\n");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122)
        Alpha++;
        else if(str[i]>=48&&str[i]<=57)
        digits++;
        else
        special++;
    }
    printf("%d are Alphabets\n%d are Digits\n%d are Characters\n",Alpha,digits,special);
    return 0;
}