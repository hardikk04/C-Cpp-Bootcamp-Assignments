// 4. Write a function to transform string into uppercase
#include<stdio.h> 

void upr(char str[ ]);
int main()
{
    char str[20];
    upr(str);
    return 0;
}
void upr(char str[ ])
{
    int i;
    printf("Enter the string\n");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]>=97)
        str[i]=str[i]-' ';
        else
        str[i];
    }
    printf("%s",str);
    
}