// code c0011

// by @Briingz

#include <stdio.h>

int main()
{
	int month ,year,i,j ;

	printf("Month : ");
	scanf("%d",&month);
	printf("Year : ");
	scanf("%d",&year);

	if ((month<=0 || month>12) || (year<1900 || year>2020))
		printf("\nERROR");
	else
	{
		int found=0;
		float income,allincome[5];
		printf("\nIncome :\n");
		for(i=1;i<=5;i++)
		{
			printf(">> Day %d : ",i*6);
			scanf("%f",&income);
			if (income<1){
				found=(1);break;}
			allincome[i]=income;	
		}
		if(found==1)
			printf("\nERROR");
		else{
			float maxin=0, minin=10000000 ,totalin=0,avincome;int daymincom, daymaxcom ;

			for (i=1;i<=5;i++){
				if(allincome[i]<minin){
					minin=allincome[i];daymincom=i*6;}
				else if(allincome[i]>maxin){
					maxin=allincome[i];daymaxcom=i*6;}
				totalin+=allincome[i];}
			avincome=totalin/5;


		float expense,allexpense[31] ;	int m=0,day;			
		for(i=0;i<31;i++)
		allexpense[i]=0;printf("\nExpense :");
		do{
						
				printf("\n>> Day : ");
				scanf("%d",&day);
				
				if (day<0 || day>30){
					printf("***** End *****\n");break;}

				printf("= ");
				scanf("%f",&expense);
				putchar('\n');
				allexpense[day]=expense;
				++m;

			}while (day>0 && day<31);

			int a,daymin,daymax,k=0; 
			float min=5000000,max=0,totalex=0,avex ;

			for(a=0;a<=30;a++){
				if(allexpense[a]>0)
				{
					if(allexpense[a]<min){
						min=allexpense[a];daymin=a;}
					else if(allexpense[a]>max){
						max=allexpense[a];daymax=a;}
					totalex+=allexpense[a];
				}
				else
					k++;
			}
			avex=totalex/m;

			if (k==31){
				printf("\nMax income : %.2f Baht. %02d/%02d/%d\n",maxin,daymaxcom,month,year);
				printf("min income : %.2f Baht. %02d/%02d/%d\n",minin,daymincom,month,year);
				printf("Max expense : 0.00 Baht.\n");
				printf("Min expense : 0.00 Baht.\n");
				printf("Avg income : %.2f Baht.\n",avincome);
				printf("Avg expense : 0.00 Baht.\n");

				printf("\nYou have average income more than average expense.\n");
			}



			else{
				printf("\nMax income : %.2f Baht. %02d/%02d/%d\n",maxin,daymaxcom,month,year);
				printf("min income : %.2f Baht. %02d/%02d/%d\n",minin,daymincom,month,year);
				printf("Max expense : %.2f Baht. %02d/%02d/%4d\n",max,daymax,month,year);
				printf("Min expense : %.2f Baht. %02d/%02d/%4d\n",min,daymin,month,year);				
				printf("Avg income : %.2f Baht.\n",avincome);
				printf("Avg expense : %.2f Baht.\n",avex);}

				if(avincome>avex)
					printf("\nYou have average income more than average expense.\n");
				else if(avex>avincome)
					printf("\nYou have average expense more than average income.\n");




		}


		
		
	}	
	return 0 ;
}