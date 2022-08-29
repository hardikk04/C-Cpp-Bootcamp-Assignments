// 7. Write a program to demonstrate memory leak in C.
#include<stdio.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    ptr=NULL;

    return 0;
    // This is the example of memory leak,When we not free the Memory after the program,memory leak is happen
}
