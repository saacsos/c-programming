#include <stdio.h>
main()
{
	int i, j, floor, space;
	printf("-----------------------------------------\n");
	printf("How many floors do you want to build?: ");
	scanf("%d", &floor);
	printf("-----------------------------------------\n");
	space = floor;
	for (i=0;i<floor;i++)
	{
		for (j=space-1;j>0;j--)
			printf(" ");
		printf("=");
		for (j=0;j<i;j++)
		{
			printf("==");
		}
	printf("\n");
	space--;
	}
	printf("Number of bricks required: %d\n", floor*floor);
}