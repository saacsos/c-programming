// code c0010
// by @Briingz
// status: waiting for approval

#include <stdio.h>
int main()
{
	int month ,year,day,i=0,j ;
	float expense,allday[31] ;
	printf("Month : ");
	scanf("%d",&month);
	printf("Year : ");
	scanf("%d",&year);
	for(j=0;j<=30;j++)
		allday[j]=0;
	if ((month<=0 || month>12) || (year<1900 || year>2020))
		printf("\nERROR");
	else
	{
		printf("\nExpense :");
		do{
			printf("\n>> Day : ");scanf("%d",&day);

			if (day<0 || day>30){
				printf("***** End *****\n\n");break;}

			printf("= ");scanf("%f",&expense);
			allday[day]=expense;
			++i;

		}while (day>0 && day<31);

		int a,daymin,daymax,k=0;
		float min=5000000,max=0,total=0,av ;

		for(a=0;a<=30;a++){
			if(allday[a]>0)
			{
				if(allday[a]<min){
					min=allday[a];daymin=a;}
				else if(allday[a]>max){
					max=allday[a];daymax=a;}
				total+=allday[a];
			}
			else
				k++;
		}
		av=total/i;

		if (k==31)
			printf("Max expense : 0.00 Baht.\nMin expense : 0.00 Baht.\nAvg expense : 0.00 Baht.");


		else{
			printf("Max expense : %.2f Baht. %02d/%02d/%4d\n",max,daymax,month,year);
			printf("Min expense : %.2f Baht. %02d/%02d/%4d\n",min,daymin,month,year);
			printf("Avg expense : %.2f Baht.\n",av);
		}
	}
	return 0 ;
}
