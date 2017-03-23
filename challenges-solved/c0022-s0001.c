//code c0022
// by @Jaruwitt
// status: waiting for approval
#include <stdio.h>
main()
{
	int capacity, current, min, day, hour;
	printf("Input Battery Capacity(mah): ");
	scanf("%d",&capacity);
	printf("Input Charging Current(mah): ");
	scanf("%d",&current);
	if((capacity > 0) && (current > 0))
	{
		min=(72*capacity)/current;
		day=min/1440;
		hour=(min-(day*1440))/60;
		printf("day %d hour %d min %d\n",day,hour,(min-(day*1440))-(hour*60));
	}
	else if ((capacity <= 0) && (current <= 0))
		printf("Battery Capacity ERROR\nCharging Current ERROR");
	else if (capacity <= 0)
		printf("Battery Capacity ERROR\n");
	else if (current <= 0)
		printf("Charging Current ERROR\n");
}
