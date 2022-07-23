#include<stdio.h> 

int main()
{
    int i,j,flag=1;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            if(i==1||i==3||i==5||i==7||i==9){
            if(j==i||j==1)
            printf("*");  
            else          
            printf(" ");  
            }
            if(i==9){
                if(j==3||j==5||j==7)
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