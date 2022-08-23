// 10. Create an authentication system. It should be menu driven.
#include<stdio.h> 
#include<string.h> 

int main()
{
    char str[3][2][20];
    int i,j,k;
    printf("Enter the Username and password\n");
    for(i=0;str[i];i++)
    {
        for(j=0;str[j];j++)
        {
            for(k=0;str[k];k++)
            {
                gets(str[i]);
            }
        }
    }
    for(i=0; str[i]; i++)
    {
        if(strcmp(username,str[i][0])==0)
    }
    return 0;
}