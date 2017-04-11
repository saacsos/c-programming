#include <stdio.h>
void main()
{
	int num,target,i,num_2;
	i=1;
	printf("Enter your target:\n");
	scanf("%d", &num);
	while(num<0||num>100){
		printf("Target error! please re-enter your target.\n");
		printf("Enter your target:\n");
		scanf("%d", &num);
		if(num>=0||num<=100){
            target = num;
        }
	}
	while(i<=10){
        printf("Round %d.) ",i);
        printf("Enter your number: ");
        scanf("%d",&num_2);
        if(num_2>num){
            printf("Your answer is too high!! let's try that again.\n");
            i++;
        }
        if(num_2<num){
            printf("Your answer is too low!! let's try that again.\n");
            i++;
        }
        if(num_2==num){
            printf("Congratulations!! target is %d and you guess %d round.",num,i);
            break;
        }
        if(i==11){
            printf("Game Over!!!");
        }
	}
}