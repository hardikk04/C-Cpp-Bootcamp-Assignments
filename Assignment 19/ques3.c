// 3. Write a program to read and display a 2D array of strings in C language.
#include<stdio.h> 

int main()
{
    char str[5][10];
    int i;
    printf("Enter the 5 string\n");
    for(i=0;i<5;i++)
    {
        gets(str[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%s\n",str[i]);
    }

    return 0;
}