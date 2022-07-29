// 6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h> 
int fact(int);
int main()
{
    int num,result;
    printf("Enter the number\n");
    scanf("%d",&num);
    result=fact(num);
    printf("Fac(%d) is %d",num,result);

    return 0;
}
int fact(int n)
{
    int i,result=1;
    for(i=1;i<=n;i++){
        result=result*i;
    }
    return(result);

}