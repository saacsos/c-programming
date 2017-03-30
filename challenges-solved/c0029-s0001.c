// code c0029
// by @brightbitez
// status: waiting for approval
#include <stdio.h>
int main()
{
	float unit,charge;
	printf("********Nong-suea-ten Village********\n\n");
	printf("The number of units tap water used: ");
	scanf("%f",&unit);
	while(1)

	{
		if(unit<=0)
		{printf("ERROR\n\n");
		printf("*****Please enter a new units.******");
		break;}
		else if (unit<50)
			{charge=20;}
		else if (unit>=50 && unit<=59)
			{charge=unit*5.25;}
		else if (unit>=60 && unit<=69)
			{charge=unit*6.25;}
		else if (unit>=70 && unit<=79)
			{charge=unit*7.25;}
		else if (unit>=80 && unit<=89)
			{charge=unit*8.25;}
		else if (unit>=90 && unit<=99)
			{charge=unit*9.25;}
		else 
			{charge=unit*10.25;}
     	printf("Tap water charges: %.2f\n\n",charge);
     	printf("**************Thank You**************");
     	break;
    }     
}
