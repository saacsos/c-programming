// c0008
// by @Midnight-M
// status: waiting for approval

#include <stdio.h>
main()
{
	int Target,Number,i;
	printf("Enter your target:\n");
	scanf("%d" ,&Target);
	while (Target < 0 || Target > 100){
		printf("Target error! please re-enter your target.\n" );
		printf("Enter your target:\n");
		scanf("%d" ,&Target);
	}
	for(i = 1; i <= 10 ;i++){
		printf("Round %d.) Enter your number: ", i);
		scanf("%d" ,&Number);
		if(Number < Target){
			printf("Your answer is too low!! let's try that again.\n");
		}
		else if (Number > Target){
			printf("Your answer is too high!! let's try that again.\n");
		}
		else{
			printf("Congratulations!! target is %d and you guess %d round.",Target,i );
			break;
		}
	}
	if(i == 10 && Number != Target){
		printf("Game Over!!!" );
	}
}
