#include<stdio.h> 

int main()
{
    int i,j;
    for(i=9;i>=1;i--){
        for(j=1;j<=9;j++){
            if(i==j||j==9){
            if(i==3||i==5||i==7||i==9)
            printf("*");
            } 
            else
            printf(" ");
            if(i==1){
                if(j==1||j==3||j==5||j==7||j==9)
                printf("*");
                else
                printf(" ");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}