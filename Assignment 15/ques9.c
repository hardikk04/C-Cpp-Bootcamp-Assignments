// 9. Write a function in C to merge two arrays of the same size sorted in descending
// order.
#include<stdio.h> 

void merg(int , int );
int main()
{
    int size1,size2;
    printf("Enter the size of array 1 ,Under 10\n");
    scanf("%d",&size1);
    printf("Enter the size of array 2, Under 10\n");
    scanf("%d",&size2);
    merg(size1,size2);
    
    return 0;
}
void merg(int size1, int size2)
{
    int a[10],b[10],c[20],i=0,size3,j=0;
    size3=size2+size1;
    printf("Enter the %d value of Array 1\n",size1);
    for(i=0;i<size1;i++)
    scanf("%d",&a[i]);
    printf("Enter the %d value of Array 2\n",size2);
    for(i=0;i<size2;i++)
    scanf("%d",&b[i]);
    for(size3;size3>0;size3--)
    {   
        if(a[size3]<b[size3])
        {
            c[size3]=a[size3];
            i++;
        }
        else
        {
            c[size3]=b[size3];
            j++; 
        }
        
        
    }
    for(size3;size3>0;size3--)
    printf("%d",c[size3]);
    
}