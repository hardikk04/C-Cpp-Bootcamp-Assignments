// 3. Write a program to count vowels in a given string
#include<stdio.h> 

int main()
{
    char str[20];
    int i,count=0;
    printf("Enter the string\n");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        count++;

    }
    printf("Vowels are %d",count);

    return 0;
}