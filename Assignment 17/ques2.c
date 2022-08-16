// 2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h> 

int main()
{
    char str[20];
    int i,j,count=1;
    printf("Enter string\n");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        for(j=i+1;str[j];j++)
        {
        if(str[j]==str[i])
        count++;
        break;
        }
    }
    printf("%d",count);
    return 0;
}