//c0008
// by @Narongrit634
// status: approved by @poundtheerapat
#include <stdio.h>
int main()
{
	int target,times = 1,input;
	while(1){
		printf("Enter your target:\n");
		scanf("%d",&target);
		if(target <0 || target > 100){
			printf("Target error! please re-enter your target.\n");
		}
		else{
			break;
		}
	}
	while(1)
	{
		printf("Round %d.) Enter your number: ",times);
		scanf("%d", &input);
		if(input > target)
			printf("Your answer is too high!! let's try that again.\n");
		else if(input < target)
			printf("Your answer is too low!! let's try that again.\n");
		else{
			printf("Congratulations!! target is %d and you guess %d round.",target,times);
			break;
		}
		if(times > 9){
			printf("Game Over!!!");
			break;
		}
		times++;
	}
}
