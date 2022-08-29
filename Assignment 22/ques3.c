/* 3. Write a program to calculate the sum of n numbers entered by the user using malloc
and free. */
#include<stdio.h>
int main()
{
    int *ptr,i,sum=0,size;
    printf("How many number would you like to sum:");
    scanf("%d",&size);

    ptr=(int*)malloc(size*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Enter the %d value:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++)
    {
        sum = sum + ptr[i];
    }
    printf("%d is the sum of %d values",sum,size);

    free(ptr);

    return 0;
}
