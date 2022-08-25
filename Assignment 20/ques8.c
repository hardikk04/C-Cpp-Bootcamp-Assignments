// 8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
void sum(int *ary,int size);
int main()
{
    int a[10],size,i;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("-----------------------------\n");
    printf("Enter the %d values of an array\n",size);
    for(i=0;i<size;i++)
    {
        printf(" Element - %d :",i+1);
        scanf("%d",&a[i]);
    }
    sum(&a,size);
}
void sum(int *ptr,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("The sum of an array is %d",sum);

}
