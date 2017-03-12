// code c0008
#include <stdio.h>
main()
{
	int input, i, num;
	printf("Enter your target: \n");
	scanf("%d",&input);
	while (input<0 || input>100)
	{
		printf("Target error! please re-enter your target.\n");
		printf("Enter your target: \n");
		scanf("%d",&input);
	}
	for (i=1;i<=10;i++)
	{	
		printf("Round %d.) Enter your number: ",i );
		scanf("%d",&num);
		if (num<input)
		{
			printf("Your answer is too low!! let's try that again.\n");
			if(i==10)
				printf("Game Over!!!\n");
		}
		else if(num>input)
		{
			printf("Your answer is too high!! let's try that again.\n");
			if(i==10)
				printf("Game Over!!!\n");
		}
		else if (num==input)
		{
			printf("Congratulations!! target is %d and you guess %d round.\n",input,i );
			break;
		}
	}
}