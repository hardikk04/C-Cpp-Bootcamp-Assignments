/* 10. Find out the maximum and minimum from an array using dynamic memory allocation
in C. */
#include<stdio.h>

int main()
{
    int *ptr,max=-9999,min=9999,i,size;
    printf("Enter the size on an array:");
    scanf("%d",&size);

    ptr=(int*)malloc(size * sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory allocation is failed");
        return 0;
    }

    printf("Enter the %d values of an array to find max and min",size);

    for(i=0;i<size;i++)
    {
        printf("\nEnter the %d value on an array:",i+1);
        scanf("%d",ptr+i);
    }

    for(i=0;i<size;i++)
    {
        if(ptr[i]>max)
        {
            max=ptr[i];
        }
    }

    printf("\n%d is the maximum value in an array",max);

    for(i=0;i<size;i++)
    {
        if(ptr[i]<min)
        {
            min=ptr[i];
        }
    }

    printf("\n%d is the minimum value in an array",min);

    free(ptr);

    return 0;
}
