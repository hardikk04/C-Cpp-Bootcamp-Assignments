/* 2. Write a function to take input employee data from the user. [ Refer structure from
question 1 ] */
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct employee e1;
    printf("Enter the Employee Id\n");
    scanf("%d",&e1.id);
    printf("Enter the Employee Name \n");
    fflush(stdin);
    fgets(e1.name,20,stdin);
    e1.name[strlen(e1.name)-1]=NULL;
    printf("Enter the Employee salary\n");
    scanf("%f",&e1.salary);


    printf("\n");
    printf("%d %s %f",e1.id,e1.name,e1.salary);

}

