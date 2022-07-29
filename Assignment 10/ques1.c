// 1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h> 
float AOC (float);
int main()
{   float radius,res;
    printf("Enter the value of radius\n");
    scanf("%f",&radius);
    res=AOC(radius);
    printf("Area of circle is %f",res);
  
}
float AOC(float r)
{
    float result;
    result=(3.14)*r*r;
    return(result);
}