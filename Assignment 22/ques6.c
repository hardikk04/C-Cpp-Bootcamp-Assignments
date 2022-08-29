// 6. Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
int main()
{
    int *ptr,size,largest=-9999,i;
    printf("Enter the size on an array:");
    scanf("%d",&size);
    ptr=(int*)malloc(size*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter the %d values to find maximium amoung us:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++)
    {
            if(ptr[i]>largest)
            {
                largest=ptr[i];
            }
    }
    printf("%d is the largest number",largest);
    free(ptr);
}
