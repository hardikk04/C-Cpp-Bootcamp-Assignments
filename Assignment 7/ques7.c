// 7. Write a program to print all Prime numbers between two given numbers
#include<stdio.h> 

int main()
{
    int a,b,i,j;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(i=a+1;i<=b-1;i++){
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
        }
            }
         if(i==j)
            printf("%d ",i);
    }
    return 0;
}