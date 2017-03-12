// c0003
// by @poonyapat
// status: Mission Failed
#include <stdio.h>

int main()
{
	int passenger;
	float pay=0,current=0,before;
	printf("Input total passenger : ");
	scanf("%d",&passenger);
	if (passenger<=0){
		passenger=0;
		printf(">> ERROR!!\n");
	}
	while (passenger){
		putchar(10);
		before = current;
		printf("Current taxi fare : ");
		scanf("%f",&current);
		if (current<=before){
			printf(">> ERROR!!\n");
			break;
		}

		printf(">> Pay : %.2f Baht\n",(current-pay)/passenger);
		pay += (current-pay)/passenger;
		--passenger;
		if (!passenger)
			break;
		printf(">> Current number of passengers : %d\n",passenger);
	}
	printf("\n-----End of program-----");

	return 0;
}
