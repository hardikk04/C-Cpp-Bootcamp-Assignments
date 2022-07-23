#include<stdio.h> 

int main()
{
    int i,j,a=5,b=5;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            if(j>=a&&j<=b){
            if(i==1||i==3||i==5||i==7||i==9)
            printf("*",--a,--b);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}