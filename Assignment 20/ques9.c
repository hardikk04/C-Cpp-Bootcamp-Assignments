// 9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
void reverse (int *ptr,int size);
int main()
{
    int a[10],size,i;
    printf("Enter the size an array\n");
    scanf("%d",&size);
    printf("Enter the %d values an array\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(&a,size);

}
void reverse (int *ptr,int size)
{
    int i;
    for(i=0;i<size;i++);
    for(i=i-1;i>=0;i--)
    {
        printf("%d ",*(ptr+i));
    }

}
