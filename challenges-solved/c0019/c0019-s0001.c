// code c0019
// by @kewaleeeiei
// status: mission failed

#include <stdio.h>
main(){
	float fire[1][8] = {0.,2.3488,2.9882,3.2405,3.6237,3.7171,4.2218,4.4217};  //4.4217//
	int sp[1][7] = {0,15,10,10,65,50,250};
	int i,n,qq;
	float total;
	scanf("%d",&n);
	if (n<=50 && n>=0)
		printf("lectricity charge: 0.00 baht.");
	else if (n>50){
		for(i=1;(n>sp[0][i] && i<=6);i++)
		{
			qq = n-sp[0][i];

			total = total +(sp[0][i]*fire[0][i]);

			n=qq;
		}

		if (n>0)

			{ n = n*fire[0][i];
				total=total+n+8.19;
				printf("Electricity charge: %.2f baht.",total);}
		else
			printf("Electricity charge: %.2f baht.",total+8.19);}
	else if (n<0)
		printf("Invalid input");


}
