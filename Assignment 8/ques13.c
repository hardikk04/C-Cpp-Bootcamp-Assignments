#include<stdio.h> 

int main()
{
      int i,j,c;
    for(i=1;i<=7;i++){
        c=65;
        for(j=1;j<=13;j++){
            if(j<=8-i||j>=6+i){
            printf("%c",c);
            j<7?c++:c--;
            }
            else{
            printf(" ");
            j==7?c--:c;
            }
        }
        printf("\n");
    }   
    return 0;
}