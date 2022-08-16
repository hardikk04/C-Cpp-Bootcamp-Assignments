// 7. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h> 

int count(int size);
int main()
{
    int size;
    printf("Enter the array size under 10\n");
    scanf("%d",&size);
    printf("Enter the %d values of array\n",size);
    printf("%d is duplicate",count(size));
    return 0;
}
int count(int size)
{
    int i,j,num[10],count=0;
    for(i=0;i<size;i++)
    scanf("%d",&num[i]);
    
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(num[i]==num[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}