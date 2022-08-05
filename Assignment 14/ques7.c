// 7. Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h> 

int main()
{
    int num[10];
    int largest,s_lar,i,j;
        printf("Enter the value of an array\n");
        for(i=0;i<=9;i++)
        scanf("%d",&num[i]);
        largest=num[0];

    for(i=1;i<10;i++)
    {
        if(largest<num[i])
        {
            s_lar=largest;
            largest=num[i];
        }
        if(largest>num[i])
            if(s_lar<num[i])
            s_lar=num[i];
    }
    printf("%d",s_lar);

    return 0;
}