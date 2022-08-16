// 9. Write a C program to sort a string array in ascending order.
#include<stdio.h> 
#include<string.h> 

int main()
{
    char str[20],temp;
    int i,j,l;
    printf("Enter the string\n");
    gets(str);
    printf("%s is string without sort\n",str);

    for(i=0;str[i];i++)
    {
    for(j=i+1;str[j];j++)
    {
        if(str[i]>str[j])
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
    }
    }
    
    printf("%s is sort string",str);
    return 0;
}