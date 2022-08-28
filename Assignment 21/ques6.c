/* 6. Write a function to sort employees according to their names [refer structure from
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
    printf("Enter the employee name\n");
    fflush(stdin);
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1]=NULL;
    printf("Enter the employee id\n");
    scanf("%d",&e.id);
    printf("Enter the employee salary\n");
    scanf("%f",&e.salary);

    return e;
}
void sortbyname(struct employee e[ ],int size)
{
    int i,j;
    struct employee temp;
     for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(strcmp(e[i].name,e[j].name)>0)
            {
                strcpy(temp,e[i]);
                strcpy(e[i],e[j]);
                strcpy(e[j],temp);
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
    struct employee e[5];
    int i;
    for(i=0;i<5;i++)
    {
        e[i]=input();
    }
    sortbyname(e,5);
    for(i=0;i<5;i++)
    {
        display(e[i]);
    }

}

