// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.
#include<stdio.h> 

int main()
{         
    // Not completed!!  
            int a = 0,n;
            int b = 1;
            printf("Enter a number to check Fibonacci seires");
            scanf("%d",&n);
            if (n==a || n==b) 
            printf("%d is Fibonacci series ",n);
            int c = a+b;
            while(c<=n)
            {
                if(c == n) {
                a = b;
                b = c;
                c = a + b;
                printf("%d is fibonacci seires",n);
                }
                else
                printf("%d is not fibonacci seires",n);

            }
   return 0;
}