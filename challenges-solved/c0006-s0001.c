// code c0006
// by @Briingz
// status: Approved by inorinchan

#include <stdio.h>

int main()
{
	printf("===================\n");
	printf("Slime  HP: 100\n");
	printf("Slime   Damage: 40\n");
	printf("Player HP: 100\n");
	printf("Player  Damage: 25\n");
	printf("===================\n");
	char  action[20] ,slash[20];
	int m=0 ,hpsm=100,hppr=100,slimeaction[4]={0,1,2,3};


	do
	{
		printf("Enter your action (Attack | Block): ");
		scanf("%s",&action);
		if (strcmp(action,"attack")==0 || strcmp(action,"Attack")==0){
			if (slimeaction[m]==0)
				printf("\nSlime   : Attack\n");
			else if (slimeaction[m]==1)
				printf("\nSlime   : Do Nothing\n");
			else if (slimeaction[m]==2)
				printf("\nSlime   : Attack\n");
			else if (slimeaction[m]==3)
				printf("\nSlime   : Dodge\n");
			printf("Player  : Attack\n");

			if(m!=3){
				hpsm-=25;
				printf("Slime  take 25 Damage.\n");
				if(m!=1) {
					hppr-=40;
					printf("Player take 40 Damage.\n");}
			}
			else if(m==1){
				hpsm-=25;
				printf("Slime  take 25 Damage.\n");
			}
		}

		else if (strcmp(action,"block")==0 || strcmp(action,"Block")==0){

			if (slimeaction[m]==0)
				printf("\nSlime   : Attack\n");
			else if (slimeaction[m]==1)
				printf("\nSlime   : Do Nothing\n");
			else if (slimeaction[m]==2)
				printf("\nSlime   : Attack\n");
			else if (slimeaction[m]==3)
				printf("\nSlime   : Dodge\n");
			printf("Player  : Block\n");
		}






		if (hppr>0 && hpsm>0)
		{
			if(strcmp(action,"attack")!=0 && strcmp(action,"Attack")!=0 && strcmp(action,"block")!=0 && strcmp(action,"Block")!=0)
			{
				printf("\nSlime  HP: %d\n",hpsm);
				printf("Player HP: %d\n",hppr); gets(slash);}
			else
			{
				printf("Slime  HP: %d\n",hpsm);
				printf("Player HP: %d\n",hppr);
				if(m==3)
					m=0;
				else
					m++;}
		}
		else if (hppr<=0||(hppr<=0 && hpsm<=0))
		{
			printf("===================\n");
			printf("You are dead.\n");
			printf("Mission Fail.\n");
			printf("===================\n");
			break;}
		else if (hpsm <=0 )
		{
			printf("===================\n");
			printf("Congratulations.\n");
			printf("Slime was killed.\n");
			printf("Mission Complete.\n");
			printf("===================\n");
			break;}

	}while(hpsm>0 && hppr >0);

	return 0 ;
}
