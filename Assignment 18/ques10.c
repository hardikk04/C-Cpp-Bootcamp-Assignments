// 10. Write a function to find the repeated character in a given string.
#include<stdio.h> 

void repeat(char str[ ]);
int main()
{
    char str[20];
    repeat(str);
    return 0;
}
void repeat(char str[ ])
{
    int i,j,count=1;
    char r;
    printf("Enter the string\n");
    gets(str);
    for(i=0;str[i];i++)
    {
        for(j=i+1;str[j];j++)
        {
            if(str[i]==str[j])
            {
               r = str[i];
            }
        }
    }
    printf("%c is repeated character",r);
}