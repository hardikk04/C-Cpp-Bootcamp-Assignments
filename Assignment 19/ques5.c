// 5. Suppose we have a list of email addresses, check whether all email addresses have
// ‘@’ in it. Print the odd email out.?
#include<stdio.h> 
#include<string.h> 

int main()
{
    char str[5][30];
    int i;
    printf("Enter the 5 string\n");
    for(i=0;i<5;i++)
    {
        gets(str[i]);
    }
    for(i=0;i<5;i++)
    {
        if(strchr(str[i],'@')!=0)
        {
            printf("Vaild email are %s\n",str[i]);
        }
    }
    return 0;
}