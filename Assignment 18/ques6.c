// 6. Write a function to check whether a given string is an alphanumeric string or not.
// (Alphanumeric string must contain at least one alphabet and one digit)
#include<stdio.h> 

void check(char str[ ]);
int main()
{
    char str[20];
    check(str);
    return 0;
}
void check(char str[ ])
{
    int i,count=0;
    printf("Enter the string one alphabet and digit is must\n");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]>=48&&str[i]<=57)
        {
            if(str[i]>=48||str[i]<=57||str[i]>=65||str[i]<=90||str[i]>=97||str[i]<=122)
            count++;
        }
    }
            if(count)
            printf("%s is aphanumeric",str);
            else
            printf("%s is not aphanumeric",str);
}