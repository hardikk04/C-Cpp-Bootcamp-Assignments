// 2. Write a function to swap strings of two char arrays of calling functions.
#include<stdio.h>
#include<string.h>

void swap(char **x, char **y)
{
    char *temp;
    temp=*x;
    *x=*y;
    *x=temp;
}
int main()
{
    char *a[20],*b[20];
    printf("Enter the String \n");
    gets(a);
    gets(b);
    printf("String Before swap %s %s\n",a,b);
    swap(&a,&b);
    printf("String After swap %s %s",a,b);
    return 0;
}
