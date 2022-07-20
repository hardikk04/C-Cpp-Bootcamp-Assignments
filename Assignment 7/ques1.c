// 1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main() {

    int a = 0, b = 1 ,i;
    int nextTerm;
    
    int n = 8;
   
    if (n == 0 || n == 1){
        printf("fib(%d) : %d",n, n);
        return 0;
    }

    for (i = 2; i <= n; ++i) {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    printf("fib(%d) : %d",n, nextTerm);
    
    return 0;
}