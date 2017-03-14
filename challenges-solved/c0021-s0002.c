// c0021
// by @PhongsitPukdeerux
// status: waiting for approval

#include <stdio.h>

int main ()
{
	int num, i, j;
	printf("-----------------------------------------\n");fflush(stdout);
	printf("How many floors do you want to build?: ");fflush(stdout);
	scanf("%d", &num);
	printf("-----------------------------------------\n");fflush(stdout);
	for(i = 1; i <= num ; i++){
		for(j = 0; j <= num - i - 1; j++)
			printf(" ");
		for(j = 0; j < i + i - 1; j++)
			printf("=");
		printf("\n");
	}
	printf("\nNumber of bricks required: %d",num*num);
}
