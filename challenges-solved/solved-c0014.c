#include <stdio.h>
int main()
{
	char chooseMenu,chooseSize,whipCream;
	int chooseNumber,cost=0,water=0,count=1,chooseRight=1;
	printf("#Welcome to Coolsweet cafe#\n");
	printf("----------------------------------------\n");
	printf("Please choose num of drink : ");
	scanf("%d",&chooseNumber);
	if(chooseNumber>3 || chooseNumber<1)
	{
			printf("ERROR GOODBYE");
	}
	else
	{
		while(count<=chooseNumber)
		{
			printf("::: Drink %d :::\n",count);
			printf("<< Type of drink >>\n");
			printf("A:ChaThai B:Cocoa C:Vanillamilk D:Mocha\n");
			printf("Choose type of drink : ");
			scanf("\n%c",&chooseMenu);
			if(chooseMenu=='A' || chooseMenu=='a')
			{
				cost=cost+50;
			}
			else if(chooseMenu=='B' || chooseMenu=='b' )
			{
				cost=cost+60;
			} 
			else if(chooseMenu=='C' || chooseMenu=='c')
			{
				cost=cost+45;
			} 
			else if(chooseMenu=='D'|| chooseMenu=='d')
			{
				cost=cost+70;
			}
			else
			{
				printf("ERROR GOODBYE");
				chooseRight=0;
				break;
			}
			printf("Choose size S/M/L : ");
			scanf("\n%c",&chooseSize);
			if(chooseSize!='S' && chooseSize!='s' && chooseSize!='M' && chooseSize!='m' && chooseSize=='L' && chooseSize=='l' )
			{
				printf("ERROR GOODBYE");
				chooseRight=0;
				break;
			}
			else if(chooseSize=='M' || chooseSize=='m')
			{
					cost=cost+15;
			}
			else if(chooseSize=='L' || chooseSize=='l')
			{
					cost=cost+25;
			}
			printf("Do u want whipcream ?Y/N : ");
			scanf("\n%c",&whipCream);
			if(whipCream!='Y' && whipCream!='y' && whipCream!='N' && whipCream!='n')
			{
				printf("ERROR GOODBYE");
				chooseRight=0;
				break;
			}
			else if(whipCream=='Y' || whipCream=='y')
			{
				cost=cost+15;
			}
			printf("total = %d baht.\n",cost);
			count++;
		}
		if(chooseRight)
		{
			printf("----------------------------------------\n");
			if(cost>=100)
			{
				printf("You get discount %d baht.\n",(cost/100)*10);
			}
			printf("Total amount = %d baht.\n",cost-((cost/100)*10));
			if(chooseNumber==3)
			{
				printf("You get a bottom of water.");
			}
		}
	}
	return 0;
}
