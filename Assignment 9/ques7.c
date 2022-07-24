/* 7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill. */
#include<stdio.h> 

int main()
{
    float num,amount=0,total=0;
    printf("Enter you units\n");
    scanf("%f",&num);
    switch(num<=50){
        case 1: amount= num*0.50;
                break;
        case 0: switch(num<=150){
            case 1: amount= 25+(num-50)*0.75;
                break;
            case 0: switch(num<=250){
                case 1: amount= 100+(num-150)*1.20;
                break;
                case 0: amount = 200+(num-250)*1.50;
                break;
            }
            break;
        } 
        break;
    }
    total = amount+amount*0.20;
    printf("Your Electircity bill is %f",total);

    return 0;
}