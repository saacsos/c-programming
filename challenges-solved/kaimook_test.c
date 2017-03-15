#include <stdio.h>
int main()
{
  int rai, wa, meter,area,rice,farm,water,home;
  printf("---------------YOUR AREA----------------\n");
  printf("Input your area (acre) : ");  
  scanf ("%d", &rai);
  printf("Input your area (square wah) : ");
  scanf ("%d", &wa);  
  printf("Input your area (square meter) : ");
  scanf ("%d", &meter);  
  area = (rai*1600)+(wa*100)+(meter);

  if (area>0 && rai>=0 && wa>=0 && wa<400 && meter>=0 && meter<100)
  {
  	rice = area*30/100; 
  	farm = area*30/100;   
  	water = area*30/100;
  	home = area*10/100;
  	printf("----------ALLOCATION YOUR AREA----------\n");
  	printf("Plant area %d acre %d square wah %d square meter.\n", rice/1600, (rice%1600)/100, (rice%100));
  	printf("Farm area %d acre %d square wah %d square meter.\n", farm/1600, (farm%1600)/100, (farm%100));
  	printf("Pond area %d acre %d square wah %d square meter.\n", water/1600, (water%1600)/100, (water%100));
  	printf("Residence area %d acre %d square wah %d square meter.\n", home/1600, (home%1600)/100, (home%100));
  }
  else {printf("ERROR\n");}  
}