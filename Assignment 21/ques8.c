// 8. Write a program to store information of 10 students and display them using structure.
#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int roll;
    int clas;
};

struct student input(int i)
{
    struct student s;
    printf("Enter the %d student name\n",i);
    fflush(stdin);
    fgets(s.name,20,stdin);
    s.name[strlen(s.name)-1]=NULL;
    printf("Enter the student roll number\n");
    scanf("%d",&s.roll);
    printf("Enter the class\n");
    scanf("%d",&s.clas);
    return s;
};
void display(struct student s)
{
    printf("\nName %s Roll number is %d Class %d",s.name,s.roll,s.clas);
}

int main()
{
    struct student s[10];
    int i;
    for(i=0;i<10;i++)
    {
        s[i]=input(i+1);
    }
    for(i=0;i<10;i++)
    {
        display(s[i]);
    }
}
