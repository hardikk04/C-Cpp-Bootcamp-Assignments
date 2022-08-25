/* 7. Write a program to count the number of vowels and consonants in a string using a
pointer. */
#include<stdio.h>
void count(char *ptr);
int main()
{
    char str[20];
    printf("Enter the string\n");
    printf("--------------------------\n");
    gets(str);
    count(&str);
}
void count(char *ptr)
{
    int vowels=0,con=0,i;
    for(i=0;*(ptr+i);i++)
    {
        if(ptr[i]=='a'||ptr[i]=='A'||
           ptr[i]=='e'||ptr[i]=='E'||
           ptr[i]=='i'||ptr[i]=='I'||
           ptr[i]=='o'||ptr[i]=='O'||
           ptr[i]=='u'||ptr[i]=='U')
        {
            vowels++;
        }
        else if (ptr[i]== ' ')
        {
            continue;
        }
        else
        {
            con++;
        }
    }
    printf("%d is Vowels in the string\n",vowels);
    printf("%d is Consonants in the string",con);
}
