// code c0009
// by @Briingz
// status: waiting for approval

#include <stdio.h>

int main()
{
	int num ,i;
	float score,total=0,av,md,min=100000 ,max=0 ;
	printf("number of student: ");
	scanf("%d",&num);

	float allscore[num];


	for(i=0;i<num;i++){
		printf("Score#%d = ",i+1);
		scanf("%f",&score);
		total+=score;
		if (score <min)
			min=score;
		if (score>max)
			max=score;
		allscore[i]=score;
	}
	printf("Max score = %.2f\n",max);
	printf("Min score = %.2f\n",min);
	av=total/num;
	printf("Average score = %.2f\n",av);

	float totalmd=0 ;
	for(i=0;i<num;i++){
		allscore[i]=allscore[i]-av;
		if (allscore[i]<0)
			allscore[i]-=allscore[i]*2;
		totalmd+=allscore[i];
	}

	md=totalmd/num;

	printf("M.D. = %.2f\n",md);

	return 0;
}
