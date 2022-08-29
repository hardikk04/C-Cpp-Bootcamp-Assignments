// 4. Write a program to input and print text using dynamic memory allocation.
#include<stdio.h>
#include<string.h>
int main()
{
    char *str,c;
    int i=0,j=1;
    str=(char*)malloc(j*sizeof(char));
    printf("Enter the string\n");
    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        str=(char*)realloc(str,j*sizeof(char));
        str[i]=c;
        i++;
    }
    str[i]=NULL;
    printf("Entered string is %s",str);
    free(str);
}
