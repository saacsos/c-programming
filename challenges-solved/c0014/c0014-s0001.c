// c0014
// by @pannakarn
// status: Approved by Briingz

#include <stdio.h>
int main()
{
	int numDrink , total=0 , i ,discount=0 , total_c;
	char type , size , whip;

	printf("#Welcome to Coolsweet cafe#\n");
	printf("----------------------------------------\n");
	printf("Please choose num of drink : ");
	scanf("%d" , &numDrink);

	if (numDrink > 0 && numDrink <= 3)
	{
		for (i=1 ; i<=numDrink ; i++)
		{
			printf("::: Drink %d :::\n", i);
			if (i==1)
				printf("<< Type of drink >>\n");
			printf("A:ChaThai B:Cocoa C:Vanillamilk D:Mocha\n");
			printf("Choose type of drink : ");
			scanf(" %c" , &type);
			if ((type >= 'A' && type <= 'D') || (type >= 'a' && type <= 'd'))
			{
				if (type == 'A' || type == 'a')
					total = total+50;
				else if (type == 'B' || type == 'b')
					total = total+60;
				else if (type == 'C' || type == 'c')
					total = total+45;
				else if (type == 'D' || type == 'd')
					total = total+70;
				printf("Choose size S/M/L : ");
				scanf(" %c" , &size);
				if (size == 'S' || size == 's' || size == 'M' || size == 'm' || size == 'L' || size == 'l')
				{
					if (size == 'M' || size == 'm')
						total = total+15;
					else if (size == 'L' || size == 'l')
						total = total+25;
					printf("Do u want whipcream ?Y/N : ");
					scanf(" %c" , &whip);
					if (whip == 'Y' || whip == 'y' || whip == 'N' || whip == 'n')
					{
						if (whip == 'Y' || whip == 'y')
						{
							total = total+15;
							printf("total = %d baht.\n", total);
						}
						else
							printf("total = %d baht.\n", total);
					}
					else
					{
						printf("ERROR GOODBYE");
						break;
					}
				}
			}
			else
			{
				printf("ERROR GOODBYE");
				break;
			}
		}

		if (i == numDrink+1)
		{
			printf("----------------------------------------\n");
			total_c = total;
			while (total_c >= 100)
			{
				total_c = total_c-100;
				discount=discount+1;
			}
			if (discount != 0)
			{
				discount = discount*10;
				printf("You get discount %d baht.\n" , discount);
			}
			total = total-discount;
			printf("Total amount = %d baht.", total);
			if (numDrink == 3)
				printf("\nYou get a bottom of water.");
		}

	}

	else
		printf("ERROR GOODBYE");


}
