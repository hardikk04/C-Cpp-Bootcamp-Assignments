// 8. Write a function to count words in a given string
#include<stdio.h> 

int count(char str[ ]);
int main()
{
    char str[50];
    printf("%d are words in the string\n",count(str));
    return 0;
}
int count(char str[ ])
{
    int i,count=1;
    printf("Enter the string\n");
    fgets(str,50,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
        count++;
    }
    return count;
}