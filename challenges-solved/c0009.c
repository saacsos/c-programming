#include <stdio.h>
int main()
{
	int f,i,sum=0,found=0,sale;
	char typedrink, size ,slash,top,typetop;
	printf("Welcome to CoolSweet Cafe\n");
	printf("Please choose num of drink(1-3) : ");
	scanf("%d",&f);slash=getchar();
	if (f>0 && f<=3)
	{	
		for(i=1 ; i<=f ; i++)
		{
			printf(":::: Order %d ::::\n",i);
			printf("<< Type of drink >> \nA:ChaThai  B:Cocoa  C:Vanila milk  D:Mocka\n");
			printf("Choose Type of drink : ");

			scanf("%c",&typedrink);slash=getchar();
			if(typedrink=='A' ||typedrink=='B' ||typedrink=='C' || typedrink=='D' ){
				if (typedrink=='A')
					sum+=50;
				else if (typedrink=='B' )
					sum+=60;
				else if (typedrink=='C' )
					sum+=45;
				else if (typedrink=='D')
					sum+=70;}
			else{
				printf("ERROR GOODBYE\n");
				break;}

			printf("Choose size S/M/L : ");
			scanf("%c",&size);slash=getchar();
			if(size=='S'  || size=='M' || size=='L' ){
				if(size=='M' )
					sum+=15;
				else if( size=='L' )
					sum+=25;}
			else{
				printf("ERROR GOODBYE\n");
				break;}

			printf("Do u want whipcream ?Y/N :");
			scanf("%c",&top);slash=getchar();
			if (top=='y'||top=='Y' || top=='n'||top=='N' ){
				if (top=='y'||top=='Y' )
					sum+=15;}
			else{
				printf("ERROR GOODBYE\n");
				break;}		
			

			printf("total = %d\n baht.",sum);
		}

		if (i>f)
		{
					
			sale=(sum/100)*10;
			if (sale>0)
				printf("You get discount %d baht.\n",sale);
			printf("Total amount = %d baht.\n",sum-sale);
			if (f==3)
				printf("You get a bottom of water.");
		}


	}
	else
		printf("ERROR GOODBYE\n");
	return 0;

}