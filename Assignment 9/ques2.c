/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
#include <stdio.h>

int main()
{
    int num, a, b;
    while(num!=0){
    printf("For addition 1\nFor Subtraction 2\nFor Multiplication 3\nFor Division 4\nFor exit 0\n");
    printf("Enter your choice");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Enter two numbers for addition");
        scanf("%d%d", &a, &b);
        printf("Addition of %d and %d is %d\n", a, b, a + b);
        break;
    case 2:
        printf("Enter two numbers for Subtraction");
        scanf("%d%d", &a, &b);
        printf("Subtraction of %d and %d is %d\n", a, b, a - b);
        break;
    case 3:
        printf("Enter two numbers for Multiplication");
        scanf("%d%d", &a, &b);
        printf("Multiplication of %d and %d is %d\n", a, b, a * b);
        break;
    case 4:
        printf("Enter two numbers for Division");
        scanf("%d%d", &a, &b);
        printf("Division of %d and %d is %d\n", a, b, a / b);
        break;
    case 0:
        exit(0);
    default:
        printf("Invalid number");
    }
    }
    return 0;
}