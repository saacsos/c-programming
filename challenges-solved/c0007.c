// code c0007
// by @Briingz
#include <stdio.h>
int main()
{
	int numb1,numb2,numa,numb,daya,dayb ;
	printf("Enter Member of B1: ");
	scanf("%d",&numb1);
	printf("Enter Member of B1: ");
	scanf("%d",&numb2);

	putchar('\n');
	printf("Enter amount A: ");
	scanf("%d",&numa);
	printf("Enter amount B: ");
	scanf("%d",&numb);
	if((numb1==0 && numa>0)  || (numb2==0&&numb>0) || ((numb1>0 && numa==0) && (numb2==0 && numb>0)) || ((numb1==0 && numa>0 )&& (numb2>0 && numb==0)))
		printf("Unable to finish order.");
	daya=numa/(numb1*6);
	if(numa%(numb1*6)>0)
		daya++;
	dayb=numb/(numb2*10);
	if(numb%(numb2*10))
		dayb++;



	if(daya>=dayb)
		printf("Receive in %d days.",daya);
	else if(daya<dayb)
		printf("Receive in %d days.",dayb);

} 
