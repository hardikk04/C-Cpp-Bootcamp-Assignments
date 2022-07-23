#include<stdio.h> 

int main()
{
      int i,j,a;
    for(i=1;i<=5;i++){
        a=1;
        for(j=1;j<=7;j++){
            if(j>=i&&j<=8-i){
            printf("%d",a);
            j<4?a++:a--;
            }   
            else
            printf(" ");
        }
        printf("\n");
    }   
    return 0;
}