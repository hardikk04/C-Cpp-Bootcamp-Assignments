/* 4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit */
#include<stdio.h> 

int main()
{
    int side1,side2,side3,choice;
    int H,B,P,temp1,temp2;
    while(choice!=0){
    printf("Press 1 to check triangle is Isosceles or not\n");
    printf("Press 2 to check Right angled triangle or not\n");
    printf("Press 3 to check triangle is Equilateral or not\n");
    printf("Press 4 to Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("Enter three side to check Isosceles triangle\n");
                scanf("%d%d%d",&side1,&side2,&side3);
                if(side1==side2||side2==side3||side3==side1)
                printf("It is Isoscele triangle\n");
                else
                printf("It is not Isoscele triangle\n");
                break;
        case 2: printf("Enter Hypotenuse, base ,Perpendicular\n");
                scanf("%d%d%d",&H,&B,&P);
                temp1= (B*B)+(P*P);
                temp2= H*H;
                if(temp1==temp2)
                printf("Triangle is right angled\n");
                else
                printf("Triangle is not right angled\n");
                break;
        case 3: printf("Enter three side to check Equilateral triangle\n");
                scanf("%d%d%d",&side1,&side2,&side3);
                if(side1==side2&&side2==side3)
                printf("Equilateral triangle\n");
                else
                printf("Not a Equilateral triangle\n");
                break;
        case 4: exit(0);
    }
    }
    return 0;
}