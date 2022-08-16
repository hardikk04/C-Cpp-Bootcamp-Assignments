// 3. Write a function to compare two strings.
#include<stdio.h> 

void compare(char str1[ ], char str2[ ]);
int main()
{
    char str1[20],str2[20];
    compare(str1,str2);
    return 0;
}
void compare(char str1[ ], char str2[ ])
{
    printf("Enter the first string\n");
    fgets(str1,20,stdin);
    printf("Enter the second string\n");
    fgets(str2,20,stdin);

    if(str1==str2)
    {
        printf("%s and %s is same",str1,str2);
    }
    else
        printf("%s and %s is not same",str1,str2);
}