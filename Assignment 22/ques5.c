/* 5. Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation. */
#include<stdio.h>
int main()
{
    int *ptr,sum=0,i,size=0;
    printf("Enter the size on an array\n");
    scanf("%d",&size);
    ptr=(int*)malloc(size*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("Enter the %d values on an array:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++)
    {
        sum = sum + ptr[i];
    }
    printf("%d is the sum of an array",sum);
    free(ptr);


}
