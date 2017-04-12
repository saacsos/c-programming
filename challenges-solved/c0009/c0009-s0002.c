// code c0009
// by @suphawimon
// status: approved by @Narongrit634
#include <stdio.h>

int read_num() {
	int num;

	printf("number of student: ");
	scanf("%d", &num);

	return num;
}
int main()
{
	int num = read_num(), i;
	float score, max = 0, min, avg, md, sum = 0.0, array_score[num], temp, sigma = 0.0;

	for (i = 0; i < num; i++) {
		printf("Score#%d = ", i+1);
		scanf("%f", &score);
		array_score[i] = score;
	}

	for (i = 0; i < num; i++) {
		if (array_score[i] > max) {
			max = array_score[i];
		}
	}

	min = array_score[0];
	for (i = 0; i < num; i++) {
		if (array_score[i] < min) {
			min = array_score[i];
		}
	}

	for (i = 0; i < num; i++) {
		sum += array_score[i];
	}
	avg = sum / num;

	for (i = 0; i < num; i++) {
		if (array_score[i] > avg) {
			temp = array_score[i] - avg;
		}else {
			temp = avg - array_score[i];
		}
		sigma += temp;
	}
	md = sigma / num;

	printf("Max score = %.2f\n", max);
	printf("Min score = %.2f\n", min);
	printf("Average score = %.2f\n", avg);
	printf("M.D. = %.2f\n", md);
}
