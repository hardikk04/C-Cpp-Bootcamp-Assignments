/* 9. Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” ) */

void reverse(char str[ ]);
#include<stdio.h> 

int main()
{
    char str[50];
    reverse(str);
    return 0;
}
void reverse(char str[ ])
{
    int i,j;
    char temp[50];
    printf("Enter the string\n");
    fgets(str,50,stdin);
    for(i=0;str[i];i++)
    {    
        if(str[i]==' ')
        {
                
        }
        
    }

}