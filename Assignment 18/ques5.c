// 5. Write a function to transform a string into lowercase
#include<stdio.h> 

void lower(char str[ ]);
int main()
{
    char str[20];
    lower(str);
    return 0;
}
void lower(char str[ ])
{
    int i;
    printf("Enter the string\n");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]>=65&&str[i]<=90)
        str[i]=str[i]+' ';
        else
        str[i];
    }
    printf("%s",str);
}