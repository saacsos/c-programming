//code c0008
// by @Briingz

#include <stdio.h>
int main()
{
	int price , ticket , total_p=0 , total_t=0 , count_z=0;
	char zone;

	printf("Welcome !~\n");
	printf("- - - - - - - - - - - - - - - - - - - -\n");
	printf("\n");
	printf("Price : ");
	scanf("%d" , &price);

	while (price!=0)
	{
		if (price==1200 || price==2200 || price==3200 || price==4500 || price==5000)
		{
			if (count_z == 0)
			{
				printf("Amount of ticket : ");
				scanf("%d" , &ticket);
			}
			
			if (ticket >= 1 && ticket<=4)
			{
				if (count_z == 0)
					total_t = total_t+ticket;
				getchar();
				printf("Zone :  ");
				scanf("%c" , &zone);
				count_z=count_z+1;
			}

			else
			{
				printf("Can not sell more than 4 tickets, please enter amount of ticket again.\n");
				continue;
			}

			if (price==1200)
			{
				if (zone >= 'T' && zone <= 'Z')
				{
					total_p = total_p+(price*ticket);
				}
				else
				{
					printf("Invalid zone, please enter zone again.\n");
					continue;
				}

			}

			else if (price==2200)
			{
				if (zone >= 'M' && zone <= 'S')
				{
					total_p = total_p+(price*ticket);
				}
				else
				{
					printf("Invalid zone, please enter zone again.\n");
					continue;
				}

			}
			else if (price==3200)
			{
				if (zone >= 'G' && zone <= 'L')
				{
					total_p = total_p+(price*ticket);
				}
				else
				{
					printf("Invalid zone, please enter zone again.\n");
					continue;
				}

			}
			else if (price==4500)
			{
				if (zone >= 'C' && zone <= 'F')
				{
					total_p = total_p+(price*ticket);
				}
				else
				{
					printf("Invalid zone, please enter zone again.\n");
					continue;
				}

			}
			else if (price==5000)
			{
				if (zone == 'A' || zone == 'B')
				{
					total_p = total_p+(price*ticket);
				}
				else
				{
					printf("Invalid zone, please enter zone again.\n");
					continue;
				}

			}
		}

		else
		{
			printf("Invalid price, please enter price again.\n");
			printf("Price : ");
			scanf("%d" , &price);
			continue;
		}
		
		if (total_t < 4)
		{
			printf("\n");
			count_z = 0;
			printf("Price : ");
			scanf("%d" , &price);
		}
		else
			break;
	}

	printf("\n");
	printf("- - - - - - - - - - - - - - - - - - - -\n");
	printf("Total %d Bath.", total_p);
}