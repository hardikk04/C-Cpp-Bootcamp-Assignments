// 7. Write a function to check whether a given string is palindrome or not.
#include<stdio.h> 

void check(char str1[ ],char str2[ ]);
int main()
{
    char str1[20],str2[20];
    check(str1,str2);
    return 0;
}
void check(char str1[ ],char str2[ ])
{
    int i,j,t;
    printf("Enter the string to check palindrome\n");
    gets(str1);
    for(i=0;str1[i];i++);
    t=i;
    for(i;i>=0;i--)
    {
        t=1;
        for(j=0;t;j++)
        {
        str2[j]=str1[i];
        t=0;
        }
    }    
    if(str2==str1)
    printf("%s is palindrome",str1);
    else
    printf("%s is not palindrome",str2);


}