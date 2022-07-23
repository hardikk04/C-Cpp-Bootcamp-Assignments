#include<stdio.h> 

int main()
{
      int i,j,a;
    for(i=1;i<=5;i++){
        a=65;
        for(j=1;j<=9;j++){
            if(j>=6-i&&j<=i+4){
            printf("%c",a);
            j<5?a++:a--;
            }
            else{
            printf(" ");
            j==5?a--:a;
            }
        }
        printf("\n");
    }   
    return 0;
}