// 3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.
#include<stdio.h> 

int main()
{
    int num;
    printf("Enter the day number of the week");
    scanf("%d",&num);
    switch(num){
        case 1: printf("Have a Good Monday Homie");
                break;       
        case 2: printf("Have a Good Tuesday Homie");
                break;       
        case 3: printf("Have a Good Wednesday Homie");
                break;       
        case 4: printf("Have a Good Thursday Homie");
                break;       
        case 5: printf("Have a Good Friday Homie");
                break;       
        case 6: printf("Have a Good Satuarday Homie");
                break;       
        case 7: printf("Have a Good Sunday Homie");
                break;       
        default: printf("Invalid number");
    }
    return 0;
}