// 7. Write a program to calculate the difference between two time periods.
#include<stdio.h>
struct time
{
    int hrs;
    int min;
    int sec;
};
void diff_(struct time start,struct time stop,struct time *diff)
{
    while(stop.sec>start.sec)
    {
        --start.min;
        start.sec+=60;
    }
    diff->sec=start.sec-stop.sec;
    while(stop.min>start.min)
    {
        --start.hrs;
        start.min+=60;
    }
    diff-> min=start.min-stop.min;
    diff->hrs=start.hrs-stop.hrs;
}
int main()
{
    struct time start_time, stop_time, diff;
    printf("Enter the start time hours\n");
    scanf("%d",&start_time.hrs);
    printf("Enter the start time Min\n");
    scanf("%d",&start_time.min);
    printf("Enter the start time sec\n");
    scanf("%d",&start_time.sec);
    printf("--------------------------\n");
    printf("Enter the stop time hours\n");
    scanf("%d",&stop_time.hrs);
    printf("Enter the start time Min\n");
    scanf("%d",&stop_time.min);
    printf("Enter the start time sec\n");
    scanf("%d",&stop_time.sec);

    diff_(start_time,stop_time,&diff);

    printf("%dhrs %dmin %dsec\n",start_time.hrs,start_time.min,start_time.sec);
    printf("%dhrs %dmin %dsec\n",stop_time.hrs,stop_time.min,stop_time.sec);
    printf("%dHrs %dmin %dsec\n",diff.hrs,diff.min,diff.sec);

}
