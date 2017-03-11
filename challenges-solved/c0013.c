// c0013 LUCKY LOTTERY //

#include <stdio.h>
int main()
{
	int first , your , how , money=0 , x;

	printf("1st prize: ");
	scanf("%d" , &first);
	printf("your number: ");
	scanf("%d" , &your);
	printf("How many: ");
	scanf("%d" , &how);

	if (your == first)
	{
		money = 2000000*how;
		x = 1;
	}
	else if (your == first-1 || your == first+1)
	{
		money = 100000*how;
		x = 2;
	}
	else if (your%1000 == first%1000)
	{
		money = 2000*how;
		x = 3;
	}
	else if (your%100 == first%100) 
	{
		money = 1000*how;
		x = 4;
	}
	else
		printf("Next time will be your turn MAY THE FORCE BE WITH YOU");
	
	if (money!=0)
		printf("win %dnd prize %d baht", x , money);
}