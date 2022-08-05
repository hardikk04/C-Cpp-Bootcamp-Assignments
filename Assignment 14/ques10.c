// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user.
#include<stdio.h> 

int main()
{
    int a[5],b[5],i;
    printf("Enter the 5 number\n");
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=4;i++)
    b[i]=a[i];

    for(i=0;i<=4;i++)
    printf("Array A values is %d\n",a[i]);
    for(i=0;i<=4;i++)
    printf("copy Array values is %d\n",b[i]);
    return 0;
}