/* 9. Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed */
#include<stdio.h> 
#include<string.h> 

void fact();
int main()
{
    char username[5][20]={"hardikk04","amit123","vivek123","rajat123","chirag123"};
    char username1[20];
    int i,flag=0;
    printf("Enter the username\n");
    gets(username1);
    for(i=0;i<5;i++)
    {
        if(strcmp(username[i],username1) == 0)
        {
        fact();
        break;
        }
        flag=1;
    }
    if(flag)
    printf("Username does not exist");
    return 0;
}
void fact()
{
    int a,i,fact=1;
    printf("Enter the value of fact\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("%d is the factorial",fact);

}