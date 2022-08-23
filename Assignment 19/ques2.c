// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from
// the user.
#include<stdio.h> 
#include<string.h> 

int main()
{
    char str[10][20],temp[20];
    int i,j;
    printf("Enter the 10 city names\n");
    for(i=0;i<10;i++)
    {
        gets(str[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    for(i=0,j=0;i<10;i++)
    {
        printf("%d = %s\n",++j,str[i]);
    }
    return 0;
}
