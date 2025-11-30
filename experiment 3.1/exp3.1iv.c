#include <stdio.h>

int main()
{
    int year, total_days = 0, day;
    printf("Enter the year:");
    scanf("%d", &year);

    for (int i = 1; i < year; i++)
    {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
        {
            total_days = total_days + 366;
        }
        else{
            total_days=total_days+365;
        }
    }
    day=total_days%7;
    if(day==0){
        printf("monday");
    }
    else if(day==1){
        printf("tuesday");
    }
    else if(day==2){
        printf("wednesday");
    }
    else if(day==3){
        printf("thursday");
    }
    else if(day==4){
        printf("friday");
    }
    else if(day==5){
        printf("saturday");
    }
    else if(day==6){
        printf("sunday");
    }
    return 0;
}