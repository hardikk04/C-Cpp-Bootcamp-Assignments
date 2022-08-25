#include<stdio.h>
void sort(int *ptr, int size);
int main()
{
    int a[10],size,i;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter the %d value of an array\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,size);
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

}
void sort(int *ptr, int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=i;j<size;j++)
        {
            if(ptr[i]>ptr[j])
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }

        }

    }

}
