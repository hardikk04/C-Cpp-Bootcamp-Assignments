// 1. Define a structure Employee with member variables id, name, salary
#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct employee e1={1,"HARDIK",1000000};
    printf("%d %s %f",e1.id,e1.name,e1.salary);

}
