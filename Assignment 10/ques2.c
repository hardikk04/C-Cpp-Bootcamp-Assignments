// 2. Write a function to calculate simple interest. (TSRS)
#include<stdio.h> 

float SI(float,float,float);
int main()
{
    float time,rate,princple,result;
    printf("Enter Princple\n");
    scanf("%f",&princple);
    printf("Enter Time\n");
    scanf("%f",&time);
    printf("Enter Rate\n");
    scanf("%f",&rate);
    result=SI(princple,time,rate);
    printf("Simple Interest is %f",result);
    return 0;
}
float SI(float p, float t,float r)
{
    float result;
    result=p*r*t/100;
    return (result);

}