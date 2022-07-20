// 10. Write a program to print all Armstrong numbers under 1000
#include<stdio.h> 

int main()
{
   int n,c,r,arm;
   for(n=1;n<=1000;n++){
    arm=0;
    c=n;
    while(c!=0){
        r=c%10;
        arm=arm+(r*r*r);
        c=c/10;       
    }
    if(n==arm)
    printf("%d ",n);
   }
}