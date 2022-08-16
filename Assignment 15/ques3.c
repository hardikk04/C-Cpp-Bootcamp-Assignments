// 3. Write a function to sort an array of any size. (TSRN)
#include<stdio.h> 

void s(int num[ ],int N);
int main()
{
    int num[10];
    s(num,10);
    return 0;
}
void s(int num[ ],int N)
{
    int i,j,sort=0;
    printf("Enter the values\n");
    for(i=0;i<N;i++)
    scanf("%d",&num[i]);
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(num[i]>num[j])
            {
                sort=num[i];
                num[i]=num[j];
                num[j]=sort;
            }
        }
    }
    for(i=0;i<N;i++)
    printf("%d ",num[i]);
    
}