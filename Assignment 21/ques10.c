/* 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student. */
#include<stdio.h>
#include<string.h>

struct mark
{
    char name[20];
    int roll;
    float chem_marks,maths_marks,phy_marks
};
struct mark input(int n)
{
    struct mark s;
    printf("-----------------------------\n");
    printf("Enter the %d Name of student\n",n);
    fflush(stdin);
    fgets(s.name,20,stdin);
    s.name[strlen(s.name)-1]=NULL;
    printf("Enter the Roll number\n");
    scanf("%d",&s.roll);
    printf("Enter the Marks of Chemistry\n");
    scanf("%d",&s.chem_marks);
    printf("Enter the Marks of maths\n");
    scanf("%d",&s.maths_marks);
    printf("Enter the Marks of Physics\n");
    scanf("%d",&s.phy_marks);
    return s;
}

int main()
{
    struct mark s[5];
    int i;
    for(i=0;i<5;i++)
    {
        s[i]=input(i+1);
    }
    for(i=0;i<5;i++)
    {
        for(i=0;i<5;i++)
        {
            printf("%d Student\n",i+1);
            float per=(s[i].chem_marks+s[i].maths_marks+s[i].phy_marks)/3;
            printf("%s student Percentage is %f\n",s[i].name,per);
        }
    }

}
