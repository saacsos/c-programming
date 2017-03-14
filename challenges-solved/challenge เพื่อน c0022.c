//by ongreverze

#include <stdio.h>
#include <math.h>
int main()
{
    int hour,min,day,time,capacity,current;
    printf("Input Battery Capacity(mah): ");
    scanf("%d",&capacity);
    printf("Input Charging Current(mah): ");
    scanf("%d",&current);
    time = (72*capacity)/current;
    day = time/(60*24);
    hour = (time-day*(60*24))/60;
    min = time%60;
    if(capacity<=0 && current<=0)
        printf("Battery Capacity ERROR\nCharging Current ERROR");
    else if(current<=0)
        printf("Charging Current ERROR");
    else if(capacity<=0)
        printf("Battery Capacity ERROR");
    else
        printf("day %d hour %02d min %02d",day,hour,min);
}
