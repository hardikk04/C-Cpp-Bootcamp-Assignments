// 8. Write a function in C to print all unique elements in an array.
#include<stdio.h> 

void unique(int size);
int main()
{
    int size;
    printf("Enter the size of an array under 10\n");
    scanf("%d",&size);
    printf("Enter the value of %d array\n",size);
    unique(size);
    return 0;
}
void unique(int size)
{
    int num[10],i,j,uni=0;
    for(i=0;i<size;i++)
    scanf("%d",&num[i]);
    for(i=0;i<size;i++)
    {
        uni=0;
        for(j=i+1;j<size;j++)
        {
            if(num[i]==num[j])
            {
            uni++;
            }
        }
            if(uni==0)
            printf("%d",num[i]);
    }
    
}