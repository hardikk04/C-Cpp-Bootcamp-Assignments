#include<stdio.h> 

int main()
{
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=20;j++){
            if(j>=4-i&&j<=6+i){
                if(i==4&&j==9){
                printf("MySirG");
                }
                else
                printf("*");
            }
            else
            printf(" ");
            if(j>=14-i&&j<=16+i){
            printf("*");
            }
            else
            printf(" ");
        }
            printf("\n");
    }
        for(i=1;i<=10;i++){
            for(j=1;j<=20;j++){
                if(j>=i&&j<=20-i)
                printf("*");
                else
                printf(" ");
                if(j>=i&&j<=20-i)
                printf("*");
                else
                printf(" ");

            }
            printf("\n");
        }
    return 0;
}