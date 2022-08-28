// 9. Write a program to store information of n students and display them using structure
#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int roll;
    int clas;
};

struct student input()
{
    struct student s;
    printf("---------------------------\n");
    printf("Enter the Name of student\n");
    fflush(stdin);
    fgets(s.name,20,stdin);
    s.name[strlen(s.name)-1]=NULL;
    printf("Enter the Roll number\n");
    scanf("%d",&s.roll);
    printf("Enter the Class number\n");
    scanf("%d",&s.clas);
    return s;
};
void display(struct student s)
{
    printf("----------------------------------\n");
    printf("%s Student %d Roll number %d class\n",s.name,s.roll,s.clas);
}

int main()
{
    struct student s[20];
    int i,size;
    printf("Enter size on students\n");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        s[i]=input();
    }
    for(i=0;i<size;i++)
    {
        display(s[i]);
    }
}
