/* 4. Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1] */
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
    struct employee e1;

    printf("Enter the id \n");
    scanf("%d",&e1.id);
    printf("Enter the Name \n");
    fflush(stdin);
    fgets(e1.name,20,stdin);
    e1.name[strlen(e1.name)-1]=NULL;
    printf("Enter the salary\n");
    scanf("%f",&e1.salary);



    return e1;
}


int main()
{
    struct employee e[3],h={1,"a",-9999};;
    int i;
    for(i=0;i<3;i++)
    {
        e[i]=input();
    }
    for(i=0;i<3;i++)
    {
        if(e[i].salary>h.salary)
            h.salary=e[i].salary;
    }
    printf("The highest salary %f",h.salary);

}
