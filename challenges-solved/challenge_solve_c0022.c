/* challenge solve code : c0022 by Thikamporn Simud 5910401033 */

#include <stdio.h>
int main(){
  int full, current, minute, hour, day;
  printf("Input Battery Capacity(mah): ");
  scanf("%d", &full);
  printf("Input Charging Current(mah): ");
  scanf("%d", &current);

  if(full <= 0 && current > 0){
    printf("Battery Capacity ERROR");
  }
  else if(current <= 0 && full > 0){
    printf("Charging Current ERROR");
  }
  else if(full <= 0 && current <= 0){
    printf("Battery Capacity ERROR\n");
    printf("Charging Current ERROR");
  }
  else{
    minute = (72 * full) / current;
    day = minute / (24*60);
    hour = (minute % (24*60))/ 60;
    minute = (minute % (24*60)) % 60;
    printf("day %d hour %d min %d", day,hour,minute);
  }
}