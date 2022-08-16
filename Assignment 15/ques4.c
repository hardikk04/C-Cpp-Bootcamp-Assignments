/* 4. Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] ) */
#include<stdio.h> 

void rotation(int n, int  d);
int main()
{
    int n,d;
    printf("Enter the value of N position and D direction\n");
    scanf("%d%d",&n,&d);
    rotation(n,d);
    return 0;
}
void rotation(int n, int  d)
{
    int num[10];
    int temp,i,j;
    for(i=0;i<n;i++)
    scanf("%d",&num[i]);
    for(i=0;i<d;i++)
    {
        temp=num[0];
        for(j=0;j<n-1;j++)
        {
            num[j]=num[j+1];
        }
            num[n-1]=temp;
    }
    for(i=0;i<n;i++)
    printf("%d ",num[i]);
}