// 1. Write a function to calculate length of the string
#include<stdio.h> 

void length(char str[ ]);
int main()
{
    char str[20];
    length(str);
    return 0;
}
void length(char str[ ])
{
    int i;
    printf("Enter the string to calculate the length of it\n");
    fgets(str,20,stdin);
    for(i=0;str[i];i++);
    i=i-1;
    printf("%d",i);

}