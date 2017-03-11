// c0007  //

#include <stdio.h>
int main()
{
	int b1 , b2 , a ,b , day_a=1 , day_b=1 , day=0 ,numb1 , numb2;

	printf("Enter Member of B1: ");
	scanf("%d" , &b1);
	printf("Enter Member of B2: ");
	scanf("%d" , &b2);
	printf("\n");
	printf("Enter amount A: ");
	scanf("%d" , &a);
	printf("Enter amount B: ");
	scanf("%d" , &b);

	if (b1 == 0 && a != 0)
		day_a = 0;
	else if (b1 != 0 && a==0)
		day_a = 0;
	else if (b1 == 0 && a ==0)
		day_a = 0;
	else
	{
		numb1 = b1*6;
		while (numb1 < a)
		{
			day_a = day_a+1;
			numb1 = numb1+numb1;
		}
	}

	if (b2 == 0 && b != 0)
		day_b = 0;
	else if (b2 != 0 && b==0)
		day_b = 0;
	else if (b2 == 0 && b ==0)
		day_b = 0;
	else 
	{
		numb2 = b2*10;
		while (numb2 < b)
		{
			day_b = day_b+1;
			numb2 = numb2+numb2;
		}
	}

	printf("\n");
	if (day_a == 0 && day_b == 0)
		printf("Unable to finish order.");
	else
	{
		if (day_a > day_b)
			day = day_a;
		else if (day_a < day_b)
			day = day_b;
		else if (day_a == day_b)
			day = day_b;
		printf("Receive in %d days.", day);
	}
}