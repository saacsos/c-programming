// c0013
// by phupwt
// status: waiting for approval

#include <stdio.h>
int main()
{
	int one,num_me,many;

	printf("1st prize: ");
	scanf("%d",&one);

	printf("your number: ");
	scanf("%d",&num_me);

	printf("How many: ");
	scanf("%d",&many);

	if(num_me==one)
	{
		printf("win 1st prize %d baht",2000000*many);
	}

	else if(one==num_me+1 || one==num_me-1)
	{
		printf("win 2nd prize %d baht",100000*many);
	}

	else if(one%1000==num_me%1000)
	{
		printf("win 3rd prize %d baht",2000*many);
	}

	else if(one%100==num_me%100)
	{
		printf("win 4th prize %d baht",1000*many);
	}

	else
	{
		printf("Next time will be your turn MAY THE FORCE BE WITH YOU");
	}


}
