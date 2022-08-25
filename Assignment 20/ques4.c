// 4. Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>
int main()
{
    int x=10,*a,**b,***c;
    a=&x;
    b=&a;
    c=&b;
    printf("%d %d %d %d\n",x,*a,**b,***c);
    printf("%d %d %d %d\n",a,*b,**c,&x);
    printf("%d %d %d\n",b,&a,*c);
    printf("%d %d\n",c,&b);
}
