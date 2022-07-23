#include<stdio.h> 

int main()
{
      int i,j;
      char c;
    for(i=1;i<=5;i++){
        c='A';
        for(j=1;j<=7;j++){
            if(j>=i&&j<=8-i){
            printf("%c",c);
            j<4?c++:c--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }   
    return 0;
}