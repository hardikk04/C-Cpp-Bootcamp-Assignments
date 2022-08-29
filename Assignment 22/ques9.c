/* 9. Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed. */
#include<stdio.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation is failed");
        return 0;
    }
    printf("Memory allocation succesfully");
}
