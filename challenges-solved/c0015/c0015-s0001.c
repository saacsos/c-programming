// c0015
// by @soizensun
// status: mission failed ID:10T
#include <stdio.h>
int main (){
int target ;

while(1){
	printf("Enter your target :\n");
	scanf("%d",&target);
	if(target < 0 || target > 100){
		printf("Target error! please re-enter your target.\n");
	}
	else{ break; }
}
int x, i=1;
while(1){
	printf("Round %d.) Enter your number: ",i );
	scanf("%d",&x);
    i++;
    if(x == target){
    	printf("Congratulations!! target is %d and you guess %d round.\n",target,(i-1));break;
    }
    if(x < target){
    	printf("Your answer is too low!! let's try that again.\n");
    }
    if(x > target){
    	printf("Your answer is too high!! let's try that again.\n");
    }
    if(i > 10){
    	printf("Game Over!!!\n");
    	break;
    }
}

}
