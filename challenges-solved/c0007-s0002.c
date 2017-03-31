/*  c0007
	by @suphawimon
	status: waiting for approval
	*/
#include <stdio.h>

int main()
{
	int B1, B2, A, B, amoungOfDay_A = 0, amoungOfDay_B = 0, day_A, day_B, receive;

	printf("Enter Member of B1: ");
	scanf("%d", &B1);
	printf("Enter Member of B2: ");
	scanf("%d", &B2);
	printf("\n");
	printf("Enter amount A: ");
	scanf("%d", &A);
	printf("Enter amount B: ");
	scanf("%d", &B);
	printf("\n");

	if ((B1 == 0 && A > 0) || (B2 == 0 && B > 0 )) {
		printf("Unable to finish order.\n");
	}
	else {
		amoungOfDay_A = B1 * 6;
		amoungOfDay_B = B2 * 10;
		day_A = A / amoungOfDay_A;
		if (A % amoungOfDay_A != 0) {
			day_A++;
		}
		day_B = B / amoungOfDay_B;
		if (B % amoungOfDay_B != 0) {
			day_B++;
		}
		if (day_A >= day_B) {
			receive = day_A;
		}
		else {
			receive = day_B;
		}

		if (receive == 1) {
			printf("Receive in 1 day.\n");
		}
		else {
			printf("Receive in %d days.\n", receive);
		}
	}
}
