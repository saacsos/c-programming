#include <stdio.h>
int main()
{
	int target=0,countRound=1,guessNumber,win=0;
	printf("Enter target:\n");
	scanf("%d",&target);
	while(target<0 || target>100)
	{
		printf("Target error! please re-enter your target.\n");
		printf("Enter target:\n");
		scanf("%d",&target);
	}
	while(countRound<=10)
	{
		printf("Round %d.) Enter your number: ",countRound);
		scanf("%d",&guessNumber);
		if(guessNumber==target)
		{
			printf("Congratulations!! target is %d and you guess %d round.",guessNumber,countRound);
			win=1;
			break;
		}
		else if(guessNumber>target)
		{
			printf("Your answer is too high!! let's try that again.\n");
		}
		else 
		{
			printf("Your answer is too low!! let's try that again.\n");
		}
		countRound++;
	}
	if(!win)
	{
		printf("Game Over!!!");
	}
	return 0;

}
