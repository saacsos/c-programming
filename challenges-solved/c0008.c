#include <stdio.h>
int main()
{
	int i,target,predict;

	do
	{
		printf("Enter your target:\n");
		scanf("%d",&target);
		if(target<0 || target>100)
			printf("Target error! please re-enter your target.\n");
	}while (target<0 || target>100);

	for(i=1;i<=10;i++){
		printf("Round %d.) Enter your number: ",i);
		scanf("%d",&predict);

		if (predict==target){
			printf("Congratulations!! target is %d and you guess %d round.",target,i);
			break;}
		if (predict>target){
			printf("Your answer is too high!! let's try that again.\n");
			if(i==10)
				printf("Game Over!!!");
		}
		if (predict<target){
			printf("Your answer is too low!! let's try that again.\n");	
			if(i==10)
				printf("Game Over!!!");
		}

	}
	return 0;

}