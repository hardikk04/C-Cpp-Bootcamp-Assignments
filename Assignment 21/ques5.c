/* 5. Write a function to sort employees according to their salaries [ refer structure from
question 1] */
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    float salary;

};
struct employee input()
{
    struct employee e;
        printf("Enter the name employee\n");
        fflush(stdin);
        fgets(e.name,20,stdin);
        e.name[strlen(e.name)-1]=NULL;
        printf("Enter the employee id\n");
        scanf("%d",&e.id);
        printf("Enter the employee salary\n");
        scanf("%f",&e.salary);

    return e;
}
void sortbyprice(struct employee e[ ],int size)
{
    struct employee temp;
    int i,j;
    for(i=1;i<=size-1;i++)
    {
        for(j=0;j<=size-1-i;j++)
        {
            if(e[j].salary>e[j+1].salary)
            {
                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;
            }
        }
    }
}
void display(struct employee e)
{
   printf("\n%d %s %f",e.id,e.name,e.salary);
}

int main()
{
    struct employee e[3];
    int i;
    for(i=0;i<3;i++)
    {
        e[i]=input();
    }
    sortbyprice(e,3);
    for(i=0;i<3;i++)
    {
        display(e[i]);
    }
}

