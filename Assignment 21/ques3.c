// 3. Write a function to display employee data. [ Refer structure from question 1
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
    struct employee e1[3];
    int i;
    for(i=0;i<3;i++)
    {
    printf("Enter the id\n");
    scanf("%d",&e1[i].id);
    printf("Enter the Name\n");
    fflush(stdin);
    fgets(e1[i].name,20,stdin);
    e1[i].name[strlen(e1[i].name)-1]=NULL;
    printf("Enter the salary\n");
    scanf("%f",&e1[i].salary);
    }
    display(e1);
}
void display(struct employee e1[ ])
{
    int i;
    for(i=0;i<3;i++)
    printf("%d %s %f",e1[i].id,e1[i].name,e1[i].salary);
}
