// 2. Write a function to reverse a string.
#include<stdio.h> 

void reverse(char str[ ]);
int main()
{
    char str[20];
    reverse(str);
    return 0;
}
void reverse(char str[ ])
{
    char rev[20];
    int i;
    printf("Enter the string\n");
    gets(str);
    for(i=0;str[i];i++);
    for(i;i>=0;i--)
    {
        printf("%c",str[i]);
    }

}