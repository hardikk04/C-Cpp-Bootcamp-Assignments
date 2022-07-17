// 7. Write a program to count digits in a given number
#include<stdio.h> 

int main()
{
    int digit,r=0,i;    
    printf("Enter digits\n");
    scanf("%d",&digit);
    for(i=0;i<digit;i){
        digit=digit/10;
        r++;
    }
    printf("%d",r);
  
    return 0;
}