// 8. Write a program to find next Prime number of a given number
#include<stdio.h> 

int main()
{
    int a,i,j;
    printf("Enter a number");
    scanf("%d",&a);
    for(i=a+1;i<=a+5;i++){
        for(j=2;j<=i;j++){
            if(i%j==0)
            break;
        }
        if(i==j){   
        printf("Next prime number is %d",i);
        break;
        }

    }
    return 0;
}